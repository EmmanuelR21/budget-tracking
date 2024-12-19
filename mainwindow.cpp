#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
#include "QMessageBox"
#include "classes/account.h" //
#include "financegraph.h"
#include "graphviewer.h"
#include "setbudget.h"
#include <iostream>

Account transportation;
Account food;
Account other;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDoubleValidator *doubleValidator = new QDoubleValidator(-999999.0, 999999.0, 2, this);
    ui->enterTransactionLineEdit->setValidator(doubleValidator);

    ui->enterTransactionLabel->setVisible(false);
    ui->enterTransactionLineEdit->setVisible(false);
    ui->dateTimeLabel->setVisible(false);
    ui->dateTimeEdit->setVisible(false);
    ui->accountLabel->setVisible(false);
    ui->accountComboBox->setVisible(false);
    ui->addButton->setVisible(false);

    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::submitData);
    connect(ui->openDialogBtn, &QPushButton::clicked, this, &MainWindow::openDialog);
    connect(ui->visualizeBtn, &QPushButton::clicked, this, &MainWindow::openGraphViewer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openGraphViewer()
{
    GraphViewer graphs(this);
    graphs.sendAccounts(food, transportation, other);
    graphs.exec();
}

void MainWindow::openDialog()
{
    SetBudget dialog(this);                   // Create the dialog instance
    if (dialog.exec() == QDialog::Accepted) { // Wait for user interaction and check result
        float text = dialog.getLineEditText().toFloat(); // Retrieve the text from the LineEdit
        QString budgetAmt = QString::asprintf("%.2f", text);

        ui->budgetAmountTotal->setText("$" + budgetAmt);
        int radioMode = dialog.getRadioMode();
        cout << "AHHHH" << radioMode << endl;
        food.SetStartingBalance((dialog.getPercentages(radioMode)[0].toDouble() / 100) * text);
        transportation.SetStartingBalance((dialog.getPercentages(radioMode)[1].toDouble() / 100)
                                          * text);
        other.SetStartingBalance((dialog.getPercentages(radioMode)[2].toDouble() / 100) * text);
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->enterTransactionLabel->setVisible(true);
    ui->enterTransactionLineEdit->setVisible(true);
    ui->dateTimeLabel->setVisible(true);
    ui->dateTimeEdit->setVisible(true);
    ui->accountLabel->setVisible(true);
    ui->accountComboBox->setVisible(true);
    ui->addButton->setVisible(true);
    ui->pushButton->setVisible(false);
}

void MainWindow::submitData()
{
    float floatTrans = ui->enterTransactionLineEdit->text().toFloat();
    QString transaction = QString::asprintf("%.2f", floatTrans);
    QString date_and_time = ui->dateTimeEdit->text();
    QString account = ui->accountComboBox->currentText();

    if (account == "Food") {
        food.SetTransaction(transaction.toDouble());
        ui->foodList->addItem("$" + transaction + ",     " + date_and_time);
        food.SetAvgTrans();
        Box(transaction.toDouble(), food);
    } else if (account == "Transportation") {
        transportation.SetTransaction(transaction.toDouble());
        ui->transList->addItem("$" + transaction + ",     " + date_and_time);
        transportation.SetAvgTrans();
        Box(transaction.toDouble(), transportation);
    } else {
        other.SetTransaction(transaction.toDouble());
        ui->otherList->addItem("$" + transaction + ",     " + date_and_time);
        other.SetAvgTrans();
        Box(transaction.toDouble(), other);
    }

    QString text = ui->budgetAmountTotal->text();

    if (text.startsWith('$')) {
        text.remove(0, 1);
    }

    double bdgtAmt = text.toDouble();
    float sum = 0.0;

    for (float value : food.GetTransactions()) {
        sum += value;
    }

    for (float value : transportation.GetTransactions()) {
        sum += value;
    }

    for (float value : other.GetTransactions()) {
        sum += value;
    }

    bdgtAmt -= sum;
    QString str = QString::number(bdgtAmt, 'f', 2);

    ui->totalAmtLabel->setText("Total Left:" + str);

    ui->enterTransactionLabel->setVisible(false);
    ui->enterTransactionLineEdit->setVisible(false);
    ui->dateTimeLabel->setVisible(false);
    ui->dateTimeEdit->setVisible(false);
    ui->accountLabel->setVisible(false);
    ui->accountComboBox->setVisible(false);
    ui->addButton->setVisible(false);
    ui->pushButton->setVisible(true);
}

void MainWindow::Box(double transaction, Account acc)
{
    cout << acc.GetTransactionSum() << endl << acc.GetStartingBalance() << endl;
    if (acc.GetTransactionSum() >= acc.GetStartingBalance()) {
        QMessageBox::information(this,
                                 "Maybe its time to stop..",
                                 "You have exceeded the limit for this account!",
                                 QMessageBox::Warning);
    } else if (transaction > 2 * acc.GetAvgTrans()) {
        QMessageBox::information(this,
                                 "Watch your spending!",
                                 "You're Spending more than double your average!",
                                 QMessageBox::Warning);
    } else if (transaction > 1.5 * acc.GetAvgTrans()) {
        QMessageBox::information(this,
                                 "Watch your spending!",
                                 "You're Spending slightly over your average, be careful!",
                                 QMessageBox::Warning);
    } else if (transaction < acc.GetAvgTrans() / 2) {
        QMessageBox::information(
            this,
            "Nice one!",
            "You have spent less than half of your average, we will hold you to this!",
            QMessageBox::Ok);
    } else if (transaction < acc.GetAvgTrans()) {
        QMessageBox::information(this,
                                 "Nice one!",
                                 "You spent less than your average, Keep it up!",
                                 QMessageBox::Ok);
    }
}

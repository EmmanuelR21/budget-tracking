#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "classes/account.h"//

Account transportation;
Account food;
Account other;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDoubleValidator *doubleValidator = new QDoubleValidator(-999999.0,999999.0,2,this);
    ui->enterTransactionLineEdit->setValidator(doubleValidator);

    ui->enterTransactionLabel->setVisible(false);
    ui->enterTransactionLineEdit->setVisible(false);
    ui->dateTimeLabel->setVisible(false);
    ui->dateTimeEdit->setVisible(false);
    ui->accountLabel->setVisible(false);
    ui->accountComboBox->setVisible(false);
    ui->addButton->setVisible(false);

    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::submitData);
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::submitData() {
    float floatTrans = ui->enterTransactionLineEdit->text().toFloat();
    QString transaction = QString::asprintf("%.2f", floatTrans);
    QString date_and_time = ui->dateTimeEdit->text();
    QString account = ui->accountComboBox->currentText();


    if(account == "Food") {
        food.SetTransaction(transaction.toDouble());
        ui->foodList->addItem("$"+transaction+ ",     " + date_and_time);
    } else if (account == "Transportation") {
        transportation.SetTransaction(transaction.toDouble());
        ui->transList->addItem("$"+transaction+ ",     " + date_and_time);
    } else {
        other.SetTransaction(transaction.toDouble());
        ui->otherList->addItem("$"+transaction+ ",     " + date_and_time);
    }

    ui->enterTransactionLabel->setVisible(false);
    ui->enterTransactionLineEdit->setVisible(false);
    ui->dateTimeLabel->setVisible(false);
    ui->dateTimeEdit->setVisible(false);
    ui->accountLabel->setVisible(false);
    ui->accountComboBox->setVisible(false);
    ui->addButton->setVisible(false);
    ui->pushButton->setVisible(true);
}

#include "setbudget.h"
#include "QIntValidator"
#include "ui_setbudget.h"
#include <qpushbutton.h>

SetBudget::SetBudget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SetBudget)
{
    ui->setupUi(this);

    ui->foodLabel->setVisible(false);
    ui->foodLineEdit->setVisible(false);
    ui->transportationLabel->setVisible(false);
    ui->transportationLineEdit->setVisible(false);
    ui->otherLabel->setVisible(false);
    ui->otherLineEdit->setVisible(false);

    QIntValidator *validator = new QIntValidator(0, 100, this);

    ui->foodLineEdit->setValidator(validator);
    ui->transportationLineEdit->setValidator(validator);
    ui->otherLineEdit->setValidator(validator);

    connect(ui->customSplitRadio, &QRadioButton::toggled, this, &SetBudget::customRadioToggled);
    connect(ui->createSplitRadio, &QRadioButton::toggled, this, &SetBudget::defaultRadioToggled);
    connect(ui->foodLineEdit, &QLineEdit::textChanged, this, &SetBudget::validatePercentages);
    connect(ui->transportationLineEdit,
            &QLineEdit::textChanged,
            this,
            &SetBudget::validatePercentages);
    connect(ui->otherLineEdit, &QLineEdit::textChanged, this, &SetBudget::validatePercentages);
}

void SetBudget::validatePercentages()
{
    int value1 = ui->foodLineEdit->text().toInt();
    int value2 = ui->transportationLineEdit->text().toInt();
    int value3 = ui->otherLineEdit->text().toInt();

    if (value1 + value2 + value3 == 100) {
        ui->buttonBox->setEnabled(true);
    } else {
        ui->buttonBox->setEnabled(false);
    }
}

void SetBudget::defaultRadioToggled(bool checked)
{
    if (checked) {
        ui->buttonBox->setEnabled(true);
    }
}

void SetBudget::customRadioToggled(bool checked)
{
    if (!checked) {
        this->resize(this->width(), 300);
        ui->buttonBox->move(ui->buttonBox->x(), ui->buttonBox->y() - 100);
        ui->foodLabel->setVisible(false);
        ui->foodLineEdit->setVisible(false);
        ui->transportationLabel->setVisible(false);
        ui->transportationLineEdit->setVisible(false);
        ui->otherLabel->setVisible(false);
        ui->otherLineEdit->setVisible(false);
    } else {
        this->resize(this->width(), 400);
        ui->foodLabel->setVisible(true);
        ui->foodLineEdit->setVisible(true);
        ui->transportationLabel->setVisible(true);
        ui->transportationLineEdit->setVisible(true);
        ui->otherLabel->setVisible(true);
        ui->otherLineEdit->setVisible(true);

        ui->buttonBox->move(ui->buttonBox->x(), ui->buttonBox->y() + 100);
    }
}

SetBudget::~SetBudget()
{
    delete ui;
}

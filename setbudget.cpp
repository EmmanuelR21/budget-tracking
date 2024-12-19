#include "setbudget.h"
#include "QIntValidator"
#include "ui_setbudget.h"

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

    connect(ui->customSplitRadio, &QRadioButton::toggled, this, &SetBudget::customRadioToggled);
    QIntValidator *validator = new QIntValidator(0, 100, this);

    ui->foodLineEdit->setValidator(validator);
    ui->transportationLineEdit->setValidator(validator);
    ui->otherLineEdit->setValidator(validator);

    connect(ui->foodLineEdit, &QLineEdit::textChanged, this, &SetBudget::validatePercentages);
    connect(ui->transportationLineEdit,
            &QLineEdit::textChanged,
            this,
            &SetBudget::validatePercentages);
    connect(ui->otherLineEdit, &QLineEdit::textChanged, this, &SetBudget::validatePercentages);
}

void SetBudget::validatePercentages()
{
    bool ok1, ok2, ok3;

    int value1 = ui->foodLineEdit->text().toInt(&ok1);
    int value2 = ui->transportationLineEdit->text().toInt(&ok2);
    int value3 = ui->otherLineEdit->text().toInt(&ok3);

    if (ok1 && ok2 && ok3 && (value1 + value2 + value3 == 100)) {
        ui->buttonBox->setEnabled(true);
    } else {
        ui->buttonBox->setEnabled(false);
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
        return;
    }
    this->resize(this->width(), 400);
    ui->foodLabel->setVisible(true);
    ui->foodLineEdit->setVisible(true);
    ui->transportationLabel->setVisible(true);
    ui->transportationLineEdit->setVisible(true);
    ui->otherLabel->setVisible(true);
    ui->otherLineEdit->setVisible(true);

    ui->buttonBox->move(ui->buttonBox->x(), ui->buttonBox->y() + 100);
}

SetBudget::~SetBudget()
{
    delete ui;
}

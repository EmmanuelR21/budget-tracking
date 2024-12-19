#ifndef SETBUDGET_H
#define SETBUDGET_H

#include <QDialog>
#include "ui_setbudget.h"

namespace Ui {
class SetBudget;
}

class SetBudget : public QDialog
{
    Q_OBJECT

public:
    explicit SetBudget(QWidget *parent = nullptr);
    ~SetBudget();
    QString getLineEditText() const { return ui->budgetAmount->text(); }
    std::vector<QString> getPercentages(int);
    int getRadioMode();

private slots:
    void customRadioToggled(bool);
    void validatePercentages();
    void defaultRadioToggled(bool);

private:
    Ui::SetBudget *ui;
};

#endif // SETBUDGET_H

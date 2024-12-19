#ifndef SETBUDGET_H
#define SETBUDGET_H

#include <QDialog>

namespace Ui {
class SetBudget;
}

class SetBudget : public QDialog
{
    Q_OBJECT

public:
    explicit SetBudget(QWidget *parent = nullptr);
    ~SetBudget();

private slots:
    void customRadioToggled(bool);
    void validatePercentages();

private:
    Ui::SetBudget *ui;
};

#endif // SETBUDGET_H

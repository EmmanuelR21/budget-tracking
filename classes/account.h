#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "accountbase.h"

class Account : public AccountBase
{
private:
    float startingBalance;
    vector<float> transactions;
    float avgTrans;
    int percentOfBdgt;

public:
    Account();
    Account(float);

    float GetStartingBalance() const override;
    void SetStartingBalance(float) override;
    vector<float> GetTransactions() const override;
    void SetTransaction(float) override;
    int GetTransactionsSize() const override;
    float GetAvgTrans() const override;
    void SetAvgTrans() override;
    int GetPercentOfBdgt() const override;
    void SetPercentOfBdgt(int) override;
    double GetTransactionSum() const override;
};

#endif // ACCOUNT_H

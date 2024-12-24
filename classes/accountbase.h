#ifndef ACCOUNTBASE_H
#define ACCOUNTBASE_H

#include <vector>
using namespace std;

class AccountBase
{
public:
    virtual ~AccountBase() = default;

    // Constructor (optional if you need a default interface)
    virtual float GetStartingBalance() const = 0;
    virtual void SetStartingBalance(float) = 0;
    virtual vector<float> GetTransactions() const = 0;
    virtual void SetTransaction(float) = 0;
    virtual int GetTransactionsSize() const = 0;
    virtual float GetAvgTrans() const = 0;
    virtual void SetAvgTrans() = 0;
    virtual int GetPercentOfBdgt() const = 0;
    virtual void SetPercentOfBdgt(int) = 0;
    virtual double GetTransactionSum() const = 0;
};

#endif // ACCOUNTBASE_H

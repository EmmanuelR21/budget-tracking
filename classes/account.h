#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
using namespace std;

class Account {
private:
    float startingBalance;
    vector<float> transactions;
    float avgTrans;
    int percentOfBdgt;

public:
    Account();
    Account(float);
    float GetStartingBalance();
    void SetStartingBalance(float);
    vector<float> GetTransactions();
    void SetTransaction(float);
    int GetTransactionsSize();
    float GetAvgTrans();
    void SetAvgTrans();
    int GetPercentOfBdgt();
    void SetPercentOfBdgt(int);
};

#endif // ACCOUNT_H

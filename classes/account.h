#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
using namespace std;

class Account {
private:
    float startingBalance;
    vector<float> transactions;
    float avgTrans;
public:
    Account();
    Account(float);
    float GetStartingBalance();
    void SetStartingBalance(float);
    float GetTransactions(int);
    void SetTransaction(float);
    int GetTransactionsSize();
    float GetAvgTrans();
    void SetAvgTrans();
};


#endif // ACCOUNT_H

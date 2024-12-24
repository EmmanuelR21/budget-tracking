#include "account.h"
#include <iomanip>

Account::Account() {
    startingBalance = 0;
}

Account::Account(float startingBal) {
    setprecision(2);
    startingBalance = startingBal;
}

float Account::GetStartingBalance() const
{
    return startingBalance;
}
void Account::SetStartingBalance(float startBal) {
    setprecision(2);
    startingBalance = startBal;
}
vector<float> Account::GetTransactions() const
{
    return transactions;
}
void Account::SetTransaction(float transaction) { transactions.push_back(transaction); }
int Account::GetTransactionsSize() const
{
    return transactions.size();
}
float Account::GetAvgTrans() const
{
    return avgTrans;
}
void Account::SetAvgTrans() {
    float total = 0;
    for(int i = 0; i < transactions.size(); i++) {
        total += transactions[i];
    }
    setprecision(2);
    avgTrans = total / transactions.size();
}

int Account::GetPercentOfBdgt() const
{
    return percentOfBdgt;
}
void Account::SetPercentOfBdgt(int p)
{
    percentOfBdgt = p;
};

double Account::GetTransactionSum() const
{
    double sum = 0;
    for (int i = 0; i < transactions.size(); i++) {
        sum += transactions[i];
    }
    return sum;
}

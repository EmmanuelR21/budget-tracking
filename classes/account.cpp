#include "account.h"
#include <iomanip>

Account::Account() {
    startingBalance = 0;
}

Account::Account(float startingBal) {
    setprecision(2);
    startingBalance = startingBal;
}

float Account::GetStartingBalance() { return startingBalance; }
void Account::SetStartingBalance(float startBal) {
    setprecision(2);
    startingBalance = startBal;
}
vector<float> Account::GetTransactions()
{
    return transactions;
}
void Account::SetTransaction(float transaction) { transactions.push_back(transaction); }
int Account::GetTransactionsSize() { return transactions.size(); }
float Account::GetAvgTrans() { return avgTrans; }
void Account::SetAvgTrans() {
    float total = 0;
    for(int i = 0; i < transactions.size(); i++) {
        total += transactions[i];
    }
    setprecision(2);
    avgTrans = total / transactions.size();
}

int Account::GetPercentOfBdgt()
{
    return percentOfBdgt;
}
void Account::SetPercentOfBdgt(int p)
{
    percentOfBdgt = p;
};

double Account::GetTransactionSum()
{
    double sum = 0;
    for (int i = 0; i < transactions.size(); i++) {
        sum += transactions[i];
    }
    return sum;
}

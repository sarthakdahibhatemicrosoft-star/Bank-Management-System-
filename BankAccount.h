#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    string accountHolder;
    double balance;

    public :
    BankAccount(int accNO, string holder, double initialbalance);

    int getAccountNumber();
    void deposit(double amount);
    void withdraw(double amount);
    void displayDetails();
};

#endif
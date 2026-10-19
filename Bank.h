#ifndef BANK_H
#define BANK_H

#include "BankAccount.h"
#include <vector>

class Bank {
    private:
    vector<BankAccount> accounts;

    public:
    void createAccount(int accNo, string holder, double initialBalance);
    BankAccount* findAccount(int accNo);
    void displayAllAccounts();
};

#endif
#include "Bank.h"
#include <iostream>
using namespace std;

void Bank::createAccount(int accNo, string holder, double initialBalance) {
    accounts.push_back(BankAccount(accNo, holder, initialBalance));
    cout<<"Account created successfully\n";
}

BankAccount* Bank::findAccount(int accNO) {
    for (auto &acc : accounts) {
        if (acc.getAccountNumber() ==  accNO)
            return &acc;
    }

    return nullptr;
}

void Bank::displayAllAccounts() {
    for (auto &acc : accounts) {
        acc.displayDetails();
    }
}
#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(int accNo, string holder, double initialBalance) {
    accountNumber = accNo;
    balance = initialBalance;
}

int BankAccount::getAccountNumber() {return accountNumber;}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited : "<< amount << endl;
    }

    else {
        cout<<"Invlaid deposit amount!" << endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout<<"Withdrawn : " << amount << endl;
    }

    else {
        cout<<"Insufficient balance or invalid amount!"<<endl;
    }
}

void BankAccount::displayDetails() {
    cout<<"\nAccount Number: "<< accountNumber;
    cout<<"\nAccount Holder: "<< accountHolder;
    cout<<"\nBalance: "<< balance << endl;
}
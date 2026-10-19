#include "Bank.h"
#include <iostream>
using namespace std;

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\n--- Bank Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int accNo;
            string holder;
            double balance;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Account Holder Name: ";
            cin >> holder;
            cout << "Enter Initial Balance: ";
            cin >> balance;
            bank.createAccount(accNo, holder, balance);
        } else if (choice == 2) {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;
            BankAccount* acc = bank.findAccount(accNo);
            if (acc) {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc->deposit(amount);
            } else {
                cout << "Account not found!\n";
            }
        } else if (choice == 3) {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;
            BankAccount* acc = bank.findAccount(accNo);
            if (acc) {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc->withdraw(amount);
            } else {
                cout << "Account not found!\n";
            }
        } else if (choice == 4) {
            int accNo;
            cout << "Enter Account Number: ";
            cin >> accNo;
            BankAccount* acc = bank.findAccount(accNo);
            if (acc) {
                acc->displayDetails();
            } else {
                cout << "Account not found!\n";
            }
        } else if (choice == 5) {
            bank.displayAllAccounts();
        }
    } while (choice != 6);

    cout << "Exiting Bank Management System...\n";
    return 0;
}

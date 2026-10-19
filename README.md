# Bank Management System (C++)

## 📌 Overview
The **Bank Management System** is a console-based project built in C++ using the concepts of **classes and objects**.  
It allows users to create and manage multiple bank accounts, perform transactions, and view account details in a menu-driven interface.

This project demonstrates:
- Object-Oriented Programming (OOP) principles (Encapsulation, Abstraction, Object Interaction).
- Modular programming with multiple files (`.h` and `.cpp`).
- Real-world application of C++ for system simulation.

---

## 🔹 Features
- Create new bank accounts with account number, holder name, and initial balance.
- Deposit money into an account.
- Withdraw money with validation (no overdraft).
- Display details of a specific account.
- Display all accounts managed by the bank.
- Menu-driven interface for easy navigation.

---

## 🔹 Project Structure
BankManagementSystem/
│
├── BankAccount.h      # Class declaration for BankAccount
├── BankAccount.cpp    # Implementation of BankAccount methods
├── Bank.h             # Class declaration for Bank
├── Bank.cpp           # Implementation of Bank methods
└── main.cpp           # Menu-driven program (user interface)


---

## 🔹 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/BankManagementSystem.git
   cd BankManagementSystem
2. Compile the project:
   g++ main.cpp Bank.cpp BankAccount.cpp -o bank_system

3. Run the executable:
   ./bank_system


🔹 Sample Output
--- Bank Management System ---
1. Create Account
2. Deposit
3. Withdraw
4. Display Account
5. Display All Accounts
6. Exit
Enter choice: 1
Enter Account Number: 101
Enter Account Holder Name: Sarthak
Enter Initial Balance: 5000
Account created successfully!


🔹 Author
👨‍💻 Developed by Sarthak  
🎓 Diploma in Computer Science, Government Polytechnic Nagpur
📚 Focused on mastering C++ fundamentals and building real-world projects.

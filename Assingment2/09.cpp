/*
Write a class BankAccount with features like deposit(), withdraw(), and display().
Use constructor initialization and show how encapsulation prevents invalid access.
Explain why data hiding is essential in banking systems.
*/

#include<iostream>
#include<string>

using namespace std;

class BankAccount {
private:
    string accountHolderName; 
    int accountNumber;
    double balance;

public:
    
    // initialize accountHolderName directly from std::string
    BankAccount(string name, int accNum, double initialBalance)
        : accountHolderName(name), accountNumber(accNum), balance(initialBalance > 0 ? initialBalance : 0.0)
    {
        cout << "Account for " << accountHolderName << " created." << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please deposit a positive value." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Withdrawal failed. Insufficient funds." << endl;
        } else {
            cout << "Invalid withdrawal amount. Please withdraw a positive value." << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Create an account. The constructor ensures it's initialized correctly.
    BankAccount myAccount("Aditya Sharma", 20251021, 50000.0);
    myAccount.display();

    cout << "\n--- Transactions ---" << endl;
    // Valid deposit
    myAccount.deposit(15000.0);
    // Invalid deposit
    myAccount.deposit(-1000.0);
    // Valid withdrawal
    myAccount.withdraw(20000.0);
    // Invalid withdrawal (insufficient funds)
    myAccount.withdraw(50000.0);

    myAccount.display();

    // --- Demonstrating Encapsulation ---
    cout << "\n--- Trying to break encapsulation ---" << endl;
    // myAccount.balance = 1000000.0;
    cout << "// myAccount.balance = 1000000.0;" << endl;
    cout << "This causes a compile-time error because 'balance' is a private member." << endl;
    cout << "You MUST use the public deposit() method to change the balance." << endl;

    return 0;
}
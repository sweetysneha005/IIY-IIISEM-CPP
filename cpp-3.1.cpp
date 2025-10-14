#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    // Function to initialize account
    void createAccount(int accNo, string accName, double initialBalance) {
        accountNumber = accNo;
        name = accName;
        balance = initialBalance;
        cout << "\nAccount created successfully!" << endl;
        cout << "Initial Balance: ?" << balance << endl;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ?" << amount << endl;
        } else {
            cout << "Invalid or insufficient balance." << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: ?" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int accNo;
    string accName;
    double depositAmount, withdrawAmount;

    // Create account with fixed initial balance ?1000
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, accName);

    acc.createAccount(accNo, accName, 1000.0);

    // Deposit
    cout << "\nEnter amount to deposit: ?";
    cin >> depositAmount;
    acc.deposit(depositAmount);

    // Withdraw
    cout << "Enter amount to withdraw: ?";
    cin >> withdrawAmount;
    acc.withdraw(withdrawAmount);

    // Display account details
    acc.display();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    float balance;

public:
    BankAccount(string name, float amount) {
        accountHolder = name;
        balance = amount;
    }

    // Friend function to access private members
    friend void showAccountDetails(BankAccount acc);
};

// Friend function definition
void showAccountDetails(BankAccount acc) {
    cout << "\n--- Account Details ---\n";
    cout << "Account Holder: " << acc.accountHolder << endl;
    cout << "Balance: " << acc.balance << endl;
}

int main() {
    string name;
    float amount;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> amount;

    BankAccount userAccount(name, amount);
    showAccountDetails(userAccount);

    return 0;
}


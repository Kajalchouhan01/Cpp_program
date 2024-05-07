#include <iostream>

using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() : balance(0) {}

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". Current balance: $" << balance << endl;
    }

    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". Current balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    float checkBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    cout << "Current balance: $" << account.checkBalance() << endl;
    return 0;
}

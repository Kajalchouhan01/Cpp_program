#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    double balance;

public:
    void setAccountNumber(const string& accNumber) {
        accountNumber = accNumber;
    }

    void setBalance(double initialBalance) {
        balance = initialBalance;
    }

    virtual void deposit(double amount) {
        balance =  balance + amount;
        cout << "Deposited " << amount << " into account " << accountNumber << "\n";
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance =  balance - amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << "\n";
        } else {
            cout << "Insufficient funds in account " << accountNumber << "\n";
        }
    }

    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    void setInterestRate(double rate) {
        interestRate = rate;
    }

    void addInterest() {
        double interest = balance * interestRate;
        balance =  balance +interest;
        cout << "Added interest of " << interest << " to account " << accountNumber << "\n";
    }
};

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    void setOverdraftLimit(double limit) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override {
        if (balance + overdraftLimit >= amount) {
            balance =  balance - amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << "\n";
        } else {
            cout << "Exceeded overdraft limit in account " << accountNumber << "\n";
        }
    }
};

int main() {
    SavingsAccount savings;
    savings.setAccountNumber("SA123");
    savings.setBalance(1000);
    savings.deposit(500);
    savings.withdraw(200);
    savings.setInterestRate(0.05);
    savings.addInterest();

    CheckingAccount checking;
    checking.setAccountNumber("CA456");
    checking.setBalance(2000);
    checking.deposit(300);
    checking.setOverdraftLimit(500);
    checking.withdraw(2500);

    cout << "Savings Account Balance: " << savings.getBalance() << "\n";
    cout << "Checking Account Balance: " << checking.getBalance() << "\n";

    return 0;
}

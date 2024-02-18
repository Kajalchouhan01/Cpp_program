#include<iostream>
using namespace std;

class Bank
{
    long int account_balance=5000;
    
    public:
    void cashier(int cash)
    {
       account_balance +=cash;
       cout<<"updated account balance is :"<<account_balance;
    }
};
int main()
{
    Bank b;
    b.cashier(1000);
}

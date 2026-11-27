#include <iostream>
using namespace std;

class Account
{
public:
    int balance;

    Account(int b)
    {
        balance = b;
    }

    Account operator+(Account a)
    {
        Account temp(0);

        temp.balance = balance + a.balance;

        return temp;
    }
};

int main()
{
    Account a1(5000);
    Account a2(3000);

    Account a3 = a1 + a2;

    cout << "Total Balance = "
         << a3.balance;

    return 0;
}
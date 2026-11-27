#include <iostream>
using namespace std;

class Account
{
public:
    double balance = 10000;

    virtual void calculateInterest()
    {
        cout << "General Account" << endl;
    }
};

class SavingsAccount : public Account
{
public:
    void calculateInterest() override
    {
        cout << "Savings Interest = "
             << balance * 0.05 << endl;
    }
};

class CurrentAccount : public Account
{
public:
    void calculateInterest() override
    {
        cout << "Current Account has no interest";
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;

    Account *a;

    a = &s;
    a->calculateInterest();

    a = &c;
    a->calculateInterest();

    return 0;
}
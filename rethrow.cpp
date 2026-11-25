#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            cout << "Inner try block" << endl;

            throw 10;
        }

        catch(int x)
        {
            cout << "Inner catch block: " << x << endl;

            cout << "Rethrowing exception" << endl;

            throw;
        }
    }

    catch(int x)
    {
        cout << "Outer catch block: " << x;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if(b == 0)
        {
            throw b;
        }

        cout << "Division = " << a / b;
    }

    catch(int x)
    {
        cout << "Exception: Cannot divide by zero";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Outer try block" << endl;

        try
        {
            cout << "Inner try block" << endl;

            throw 10;
        }

        catch(int x)
        {
            cout << "Inner Catch: " << x << endl;
        }

        throw 5.5f;
    }

    catch(float y)
    {
        cout << "Outer Catch: " << y;
    }

    return 0;
}
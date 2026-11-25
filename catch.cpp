#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter choice (1, 2 or 3): ";
    cin >> choice;

    try
    {
        if(choice == 1)
            throw 10;

        else if(choice == 2)
            throw 5.5f;

        else if(choice == 3)
            throw 'A';

        else
            throw "Invalid Choice";
    }

    catch(int x)
    {
        cout << "Integer Exception: " << x;
    }

    catch(float y)
    {
        cout << "Float Exception: " << y;
    }

    catch(char z)
    {
        cout << "Character Exception: " << z;
    }

    catch(const char* msg)
    {
        cout << "String Exception: " << msg;
    }

    return 0;
}
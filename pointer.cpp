#include <iostream>
using namespace std;

int main()
{
    int a = 50;

    int *ptr;

    ptr = &a;

    cout << "Value of a = " << a << endl;

    cout << "Address of a = " << &a << endl;

    cout << "Address stored in ptr = " << ptr << endl;

    cout << "Value using pointer = " << *ptr;

    return 0;
}
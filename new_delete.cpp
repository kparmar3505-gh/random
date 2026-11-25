#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "Entered number = " << *ptr << endl;

    delete ptr;

    ptr = nullptr;

    cout << "Memory released successfully";

    return 0;
}
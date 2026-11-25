#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    cout << "Original Array:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    // Modifying array elements

    for(int i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptr + i) + 5;
    }

    cout << "\nModified Array:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
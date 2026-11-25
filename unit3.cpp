#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid array size";
        return 0;
    }

    // Dynamic memory allocation

    int *ptr = new int[n];

    // Accepting array elements

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    // Displaying array elements

    cout << "\nArray elements are: ";

    for(int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }

    // Calculating sum

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    cout << "\nSum = " << sum;

    // Calculating average

    float avg = (float)sum / n;

    cout << "\nAverage = " << avg;

    // Releasing memory

    delete[] ptr;

    ptr = nullptr;

    cout << "\nMemory released successfully";

    return 0;
}
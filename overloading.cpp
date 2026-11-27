#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << "Sum = " << a + b + c;
    }
};

int main()
{
    Addition obj;

    obj.add(10, 20);
    obj.add(10, 20, 30);

    return 0;
}
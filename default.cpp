#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    Student()
    {
        roll = 10;
    }

    void display()
    {
        cout << "Roll No = " << roll;
    }
};

int main()
{
    Student s1;
    s1.display();

    return 0;
}
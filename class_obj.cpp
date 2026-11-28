#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name;
    }
};

int main()
{
    Student s1;

    s1.roll = 101;
    s1.name = "Kajal";

    s1.display();

    return 0;
}
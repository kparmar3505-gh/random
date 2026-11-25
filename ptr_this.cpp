#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    void setData(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    Student *ptr = &s1;

    ptr->setData(101, "Rahul");

    ptr->display();

    return 0;
}
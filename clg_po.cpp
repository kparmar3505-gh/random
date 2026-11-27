#include <iostream>
using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout << "Person Details" << endl;
    }
};

class Student : public Person
{
public:
    void display() override
    {
        cout << "Student Details" << endl;
    }
};

class Teacher : public Person
{
public:
    void display() override
    {
        cout << "Teacher Details" << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    Person *p;

    p = &s;
    p->display();

    p = &t;
    p->display();

    return 0;
}
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

class Librarian : public Person
{
public:
    void display() override
    {
        cout << "Librarian Details" << endl;
    }
};

int main()
{
    Student s;
    Librarian l;

    Person *p;

    p = &s;
    p->display();

    p = &l;
    p->display();

    return 0;
}
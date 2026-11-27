#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "Student is studying" << endl;
    }
};

class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teacher is teaching";
    }
};

int main()
{
    Student s;
    s.name = "Rahul";

    s.displayName();
    s.study();

    return 0;
}
#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    void borrowBook()
    {
        cout << "Student borrowed a book";
    }
};

class Librarian : public Person
{
public:
    void addBook()
    {
        cout << "Librarian added a book";
    }
};

int main()
{
    Student s;
    s.name = "Rahul";
    s.display();
    s.borrowBook();

    return 0;
}
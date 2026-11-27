//syntax
//friend return_type function_name(arguments);

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 90;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout << "Marks = " << s.marks;
}

int main()
{
    Student s1;

    display(s1);

    return 0;
}
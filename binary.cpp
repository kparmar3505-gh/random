#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
    float marks;
};

int main() {
    Student s1 = {101, "Kajal", 89.5};
    Student s2;

    // Writing data into binary file
    ofstream fout("student.dat", ios::binary);

    fout.write((char*)&s1, sizeof(s1));

    fout.close();

    // Reading data from binary file
    ifstream fin("student.dat", ios::binary);

    fin.read((char*)&s2, sizeof(s2));

    cout << "Student Details:" << endl;
    cout << "Roll No: " << s2.roll << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Marks: " << s2.marks << endl;

    fin.close();

    return 0;
}
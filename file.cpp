#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int age;

    // Creating and writing into a file
    ofstream fout("student.txt");

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    fout << "Name: " << name << endl;
    fout << "Age: " << age << endl;

    fout.close();

    // Reading from the file
    ifstream fin("student.txt");

    string line;

    cout << "\nFile Contents:\n";

    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
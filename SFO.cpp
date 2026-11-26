#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int roll, marks, n;
    string name;

    ofstream fout("students.txt");

    cout << "Enter number of students: ";
    cin >> n;

    // Storing records sequentially
    for (int i = 0; i < n; i++) {
        cout << "Enter roll number, name and marks: ";
        cin >> roll >> name >> marks;

        fout << roll << " " << name << " "
             << marks << endl;
    }

    fout.close();

    // Retrieving records sequentially
    ifstream fin("students.txt");

    cout << "\nStudent Records:\n";

    while (fin >> roll >> name >> marks) {
        cout << "Roll: " << roll
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }

    fin.close();

    return 0;
}
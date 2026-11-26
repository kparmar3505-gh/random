#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    file.open("data.txt", ios::out);
    file << "Welcome to File Handling";
    file.close();

    file.open("data.txt", ios::in);

    string data;
    getline(file, data);

    cout << data;

    file.close();
    return 0;
}
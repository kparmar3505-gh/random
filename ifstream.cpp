#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    string name;

    fin >> name;

    cout << "Name: " << name;

    fin.close();
    return 0;
}
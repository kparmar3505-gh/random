#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");

    fout << "Hello C++";
    fout.close();

    ifstream fin("data.txt");

    if (fin.good()) {
        cout << "File opened successfully" << endl;
    }

    string word;

    while (fin >> word) {
        cout << word << endl;
    }

    cout << "EOF Status: " << fin.eof() << endl;
    cout << "Fail Status: " << fin.fail() << endl;
    cout << "Bad Status: " << fin.bad() << endl;
    cout << "Good Status: " << fin.good() << endl;

    fin.close();

    return 0;
}
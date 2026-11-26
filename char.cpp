#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;

    // Writing characters into file
    ofstream fout("data.txt");

    string text = "HELLO WORLD";

    for (int i = 0; i < text.length(); i++) {
        fout.put(text[i]);
    }

    fout.close();

    // Reading characters from file
    ifstream fin("data.txt");

    cout << "File Contents: ";

    while (fin.get(ch)) {
        cout << ch;
    }

    fin.close();

    return 0;
}
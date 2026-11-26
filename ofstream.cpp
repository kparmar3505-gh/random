#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");

    fout << "Hello C++";

    fout.close();
    cout << "Data written successfully";

    return 0;
}
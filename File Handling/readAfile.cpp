#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;

    ifstream MyreadFile("file.txt");
    while (getline (MyreadFile, text)) {
        cout << text;
    }
    MyreadFile.close();
    return 0;
}
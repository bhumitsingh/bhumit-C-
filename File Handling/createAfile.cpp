#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("file.txt");
    file << "Hello World!";
    file.close();
    return 0;
}
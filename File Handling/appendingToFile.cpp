#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream OutFile("file.txt", ios::app);
    
    if(!OutFile){
        cerr<<"File not created!"<<endl;
        return 1;
    }
    OutFile<<"A new line is appended to the file."<<endl;
    OutFile.close();

    cout<<"Data has been appended to the file."<<endl;
    return 0;

}
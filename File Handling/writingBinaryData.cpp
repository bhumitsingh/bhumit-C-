#include <iostream>
#include <fstream>
using namespace std;

struct Data{
    int id;
    char name[50];
};

int main(){
    Data data = {1, "John Doe"};
    // Writing binary data to a file
    ofstream OutFile("data.bin",ios::binary);
    if(!OutFile){
        cerr<<"Error opening file!"<<endl;
        return 1;
    }
    OutFile.write(reinterpret_cast<char*>(&data), sizeof(Data));
    OutFile.close();

    // Reading binary data from a file
    Data readData;
    ifstream InFile("data.bin", ios::binary);
    if(!InFile){
        cerr<<"Error opening file!"<<endl;
        return 1;
    }
    InFile.read(reinterpret_cast<char*>(&readData), sizeof(Data));
    InFile.close();

    cout<<"ID: "<<readData.id<<", Name: "<<readData.name<<endl;
    return 0;
}
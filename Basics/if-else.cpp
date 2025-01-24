#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >=18){
        cout << "You are an adult." << endl;
    }
    else if(age < 18 && age >= 13){
        cout << "You are a teenager." << endl;
    }
    else if(age < 13){
        cout << "You are a child." << endl;
    }
    else if(age > 50){
        cout << "You are old." << endl;
    }
    else{
        cout << "Invalid age." << endl;
    }
    return 0;
}
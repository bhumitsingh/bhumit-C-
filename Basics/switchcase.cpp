#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Enter a number between 1 and 5: ";
    cin >> i;
    switch(i){
        case 1:
            cout << "You entered 1." << endl;
            break;
        case 2:
            cout << "You entered 2." << endl;
            break;
        case 3:
            cout << "You entered 3." << endl;
            break;
        case 4:
            cout << "You entered 4." << endl;
            break;
        case 5:
            cout << "You entered 5." << endl;
            break;
        default:
            cout << "Invalid number." << endl;
            break;
    }
    return 0;
}
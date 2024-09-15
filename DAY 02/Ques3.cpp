#include <iostream>

using namespace std;

int main() {
    int monthNumber;
    
    cout << "Enter a number: ";
    cin >> monthNumber;
    
    switch (monthNumber) {
        case 1:
            cout << "The month is: January" << endl;
            break;
        case 2:
            cout << "The month is: February" << endl;
            break;
        case 3:
            cout << "The month is: March" << endl;
            break;
        case 4:
            cout << "The month is: April" << endl;
            break;
        case 5:
            cout << "The month is: May" << endl;
            break;
        case 6:
            cout << "The month is: June" << endl;
            break;
        case 7:
            cout << "The month is: July" << endl;
            break;
        case 8:
            cout << "The month is: August" << endl;
            break;
        case 9:
            cout << "The month is: September" << endl;
            break;
        case 10:
            cout << "The month is: October" << endl;
            break;
        case 11:
            cout << "The month is: November" << endl;
            break;
        case 12:
            cout << "The month is: December" << endl;
            break;
        default:
            cout << "Invalid number. Please enter a number between 1 and 12." << endl;
            break;
    }
    
    return 0;
}

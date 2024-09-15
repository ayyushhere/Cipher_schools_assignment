#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first integer: ";
    cin >> num1;
    
    cout << "Enter second integer: ";
    cin >> num2;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    
    if (num2 != 0) {
        double division = double(num1) / num2;
        cout << "Division: " << division << endl;
        int modulus = num1 % num2;
        cout << "Modulus: " << modulus << endl;
    } else {
        cout << "Division: Error (cannot divide by zero)" << endl;
        cout << "Modulus: Error (cannot divide by zero)" << endl;
    }

    return 0;
}

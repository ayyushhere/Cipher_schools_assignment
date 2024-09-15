#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int square = number * number;
    
    cout << "The square of " << number << " is: " << square << endl;
    
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstString, secondString;
    cout << "Enter the first string: ";
    cin >> firstString;
    cout << "Enter the second string: ";
    cin >> secondString;
    string concatenatedString = firstString + secondString;
    cout << "Concatenated string: " << concatenatedString << endl;
    return 0;
}

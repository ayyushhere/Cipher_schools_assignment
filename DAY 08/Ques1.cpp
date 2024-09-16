#include <bits/stdc++.h>

using namespace std;

int stringLength(const string &str) {
    return str.length();
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "Length of the string: " << stringLength(inputString) << endl;

    return 0;
}

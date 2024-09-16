#include <iostream>
#include <string>

using namespace std;

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";

    string result = concatenateStrings(str1, str2);
    cout << "Concatenated string: " << result << endl;

    return 0;
}

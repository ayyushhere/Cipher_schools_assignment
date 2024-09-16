#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string inputString;
    char character;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "Enter a character to count: ";
    cin >> character;

    cout << "Occurrences of '" << character << "' in the string: " << countCharacter(inputString, character) << endl;

    return 0;
}

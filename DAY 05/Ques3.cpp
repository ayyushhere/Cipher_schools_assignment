#include <iostream>
#include <string>

using namespace std;

void countVowelsAndConsonants(const string& str) {
    int vowelCount = 0;
    int consonantCount = 0;
    
    for (char ch : str) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCount;
                break;
            default:
                if (ch >= 'a' && ch <= 'z') {
                    ++consonantCount;
                }
                break;
        }
    }
    
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    cin >> input;
    
    countVowelsAndConsonants(input);
    
    return 0;
}

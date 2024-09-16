#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;
        if (tolower(str[left]) != tolower(str[right])) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string input1 = "A man, a plan, a canal, Panama";
    
    cout << boolalpha;
    cout << isPalindrome(input1) << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

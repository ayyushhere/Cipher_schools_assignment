#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            index = i + 1;
            break;
        }
    }

    cout << index << endl;
    return 0;
}

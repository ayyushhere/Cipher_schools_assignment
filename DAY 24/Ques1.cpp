#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
    int max_count = 0, current_count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            current_count++;
        } else {
            max_count = max(max_count, current_count);
            current_count = 0;
        }
    }
    max_count = max(max_count, current_count);
    return max_count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMaxConsecutiveOnes(arr) << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string two_sum_nlogn(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}

int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    cout << two_sum_nlogn(arr, target) << endl;
    return 0;
}

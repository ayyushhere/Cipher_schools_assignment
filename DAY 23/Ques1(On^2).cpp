#include <iostream>
#include <vector>
using namespace std;

string two_sum_n2(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return "YES";
            }
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
    cout << two_sum_n2(arr, target) << endl;
    return 0;
}

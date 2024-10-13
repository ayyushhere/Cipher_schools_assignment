#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_map<int, int> nextGreater;
    stack<int> s;

    for (int num : nums2) {
        while (!s.empty() && s.top() < num) {
            nextGreater[s.top()] = num;
            s.pop();
        }
        s.push(num);
    }

    vector<int> result;
    for (int num : nums1) {
        result.push_back(nextGreater.count(num) ? nextGreater[num] : -1);
    }

    return result;
}

int main() {
    int n1, n2;
    cout << "Enter the size of nums1: ";
    cin >> n1;
    cout << "Enter the size of nums2: ";
    cin >> n2;

    vector<int> nums1(n1), nums2(n2);
    cout << "Enter the elements of nums1: ";
    for (int i = 0; i < n1; ++i) {
        cin >> nums1[i];
    }

    cout << "Enter the elements of nums2: ";
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }

    vector<int> result = nextGreaterElement(nums1, nums2);

    cout << "Next greater elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

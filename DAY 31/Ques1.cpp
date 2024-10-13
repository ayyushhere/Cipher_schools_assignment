#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nearestSmallerElement(const vector<int>& A) {
    int n = A.size();
    vector<int> G(n, -1);
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && s.top() >= A[i]) {
            s.pop();
        }
        
        if (!s.empty()) {
            G[i] = s.top();
        }

        s.push(A[i]);
    }

    return G;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    vector<int> result = nearestSmallerElement(A);

    cout << "Nearest smaller elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

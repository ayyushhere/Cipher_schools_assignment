#include <iostream>
using namespace std;

int main() {
    int rows, cols, key;
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    int arr[rows][cols];
    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Enter the key to search: ";
    cin >> key;
    
    bool found = false;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

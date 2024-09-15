#include <iostream>

using namespace std;

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    cout << "Sum of the array: " << sum << endl;
    
    delete[] arr;
    
    return 0;
}

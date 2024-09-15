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
    
    int sumOdd = 0;
    int sumEven = 0;
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    
    delete[] arr;
    
    return 0;
}

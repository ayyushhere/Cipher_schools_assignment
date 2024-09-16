#include <iostream>

using namespace std;

int findMax(const int arr[], int size) {
    if (size <= 0) return -1; // Handle case where array size is non-positive

    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {7, 2, 8, 6, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {12, 23, 9, 15, 7};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Max value in arr1: " << findMax(arr1, size1) << endl;
    cout << "Max value in arr2: " << findMax(arr2, size2) << endl;
    cout << "Max value in arr3: " << findMax(arr3, size3) << endl;

    return 0;
}

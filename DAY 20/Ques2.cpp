#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 3, m = 3;
    int array[9];
    
    cout << "Enter the elements of the 3x3 array:\n";
    for (int i = 0; i < 9; i++) {
        cin >> array[i];
    }

    sort(array, array + 9);

    for (int i = 0; i < 9; i++) {
        cout << array[i] << " ";
        if ((i + 1) % 3 == 0) cout << endl;
    }

    return 0;
}

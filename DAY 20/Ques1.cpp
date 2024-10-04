#include <iostream>
using namespace std;

void rotateMatrix(int n, int m, int image[3][3]) {
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << image[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3, m = 3;
    int image[3][3];
    
    cout << "Enter the elements of the 3x3 matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    rotateMatrix(n, m, image);

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int num = 42;
    int* ptr = &num;

    cout << "Value of the variable using the variable: " << num << endl;
    cout << "Value of the variable using the pointer: " << *ptr << endl;

    return 0;
}

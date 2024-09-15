#include <iostream>

using namespace std;

int main() {
    int grade1, grade2, grade3, grade4, grade5;
    
    cout << "Enter grade 1: ";
    cin >> grade1;
    
    cout << "Enter grade 2: ";
    cin >> grade2;
    
    cout << "Enter grade 3: ";
    cin >> grade3;
    
    cout << "Enter grade 4: ";
    cin >> grade4;
    
    cout << "Enter grade 5: ";
    cin >> grade5;
    
    double average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;
    
    cout << "The average grade is: " << average << endl;
    
    return 0;
}

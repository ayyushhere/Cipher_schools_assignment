#include <iostream>

using namespace std;

int main() {
    int score;
    
    cout << "Enter the score: ";
    cin >> score;
    
    char grade;

    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80 && score < 90) {
        grade = 'B';
    } else if (score >= 70 && score < 80) {
        grade = 'C';
    } else if (score >= 60 && score < 70) {
        grade = 'D';
    } else if (score >= 0 && score < 60) {
        grade = 'F';
    } else {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        return 1; // Exit the program if the input is invalid
    }
    
    cout << "Grade: " << grade << endl;
    
    return 0;
}

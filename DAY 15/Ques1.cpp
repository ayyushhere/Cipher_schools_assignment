#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNumber;

public:
    // Constructor
    Student(string n, int a, int r) : name(n), age(a), rollNumber(r) {}

    // Method to display student details using this pointer
    void displayDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
    }
};

int main() {
    Student student1("Alice", 20, 101);
    student1.displayDetails();
    return 0;
}

#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Copy Constructor
    Rectangle(const Rectangle& rect) {
        length = rect.length;
        width = rect.width;
    }

    // Method to display area
    double area() {
        return length * width;
    }

    void displayInfo() {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect1(10.5, 5.5); // Original rectangle
    Rectangle rect2 = rect1;    // Using the copy constructor

    cout << "Original Rectangle: ";
    rect1.displayInfo();

    cout << "Copied Rectangle: ";
    rect2.displayInfo();

    return 0;
}

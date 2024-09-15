#include <iostream>

using namespace std;

class Complex {
public:
    int real;
    int imag;
    
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
    
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    
    cout << "Complex Number 1: ";
    c1.display();
    
    cout << "Complex Number 2: ";
    c2.display();
    
    Complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.display();
    
    Complex difference = c1.subtract(c2);
    cout << "Difference: ";
    difference.display();
    
    return 0;
}

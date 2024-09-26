#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string brand, string mod, string eng, int seats) 
        : brandName(brand), model(mod), engine(eng), numberOfSeats(seats) {}

    void displayInfo() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", "2.5L", 5);
    myCar.displayInfo();
    return 0;
}

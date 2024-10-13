#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    int year;
    float fuel;

public:
    Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {}

    void refuel(float amount) {
        fuel += amount;
        cout << "Refueled by " << amount << " units. Total fuel: " << fuel << " units." << endl;
    }

    virtual void display() {
        cout << "Make: " << make << ", Year: " << year << ", Fuel: " << fuel << " units." << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;

public:
    Car(string m, int y, float f, int d) : Vehicle(m, y, f), doors(d) {}

    void display() override {
        cout << "Car Details - Make: " << make << ", Year: " << year << ", Fuel: " << fuel << " units, Doors: " << doors << endl;
    }

    void openDoors() {
        cout << "Doors are opened." << endl;
    }
};

class Bike : public Vehicle {
private:
    bool hasCarrier;

public:
    Bike(string m, int y, float f, bool carrier) : Vehicle(m, y, f), hasCarrier(carrier) {}

    void display() override {
        cout << "Bike Details - Make: " << make << ", Year: " << year << ", Fuel: " << fuel << " units, Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }

    void kickStart() {
        cout << "Bike kick-started." << endl;
    }
};

int main() {
    Car car1("Toyota", 2020, 15.5, 4);
    Bike bike1("Yamaha", 2021, 5.0, true);

    car1.refuel(10);
    bike1.refuel(3);

    car1.display();
    bike1.display();

    car1.openDoors();
    bike1.kickStart();

    return 0;
}

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle starts\n"; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car drives\n"; }
};

class SportsCar : public Car {
public:
    void boost() { cout << "SportsCar boosts\n"; }
};

int main() {
    SportsCar sc;
    sc.start();
    sc.drive();
    sc.boost();
    return 0;
}


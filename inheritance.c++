#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Animal eats\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks\n"; }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}


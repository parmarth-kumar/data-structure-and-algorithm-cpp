#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) { // parameterized constructor
        cout << "Contructor called" << "\n";
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 50;
    }

    Car(Car &original) { // copy constructor
        name = original.name;
        color = original.color;
        mileage = new int; // dynamic memory allocation
        // deep copy
        *mileage = *original.mileage;
    }
};

int main() {
    Car c1("maruti 800","white");
    Car c2(c1);
    cout << *c1.mileage << "\n";
    cout << *c2.mileage << "\n";

    *c2.mileage = 60;
    cout << *c1.mileage << "\n";
    cout << *c2.mileage << "\n";
}
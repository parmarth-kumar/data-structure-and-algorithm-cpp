#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;

    Car(string name, string color) { // parameterized constructor
        cout << "Contructor called" << "\n";
        this->name = name;
        this->color = color;
    }

    Car(Car &original) { // copy constructor
        name = original.name;
    }
};

int main() {
    Car c1("maruti 800","white");
    cout << c1.name << "\n";
    cout << c1.color << "\n";

    Car c2(c1);
    cout << c2.name << "\n";
    cout << c2.color << "\n";
}
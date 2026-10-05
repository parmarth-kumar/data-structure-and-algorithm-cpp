#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }

    Car(Car &original) {
        name = original.name;
        color = original.color;
        mileage = original.mileage;
    }

    ~Car() {
    cout << "deleting object .. ";
    if(mileage != NULL) {
        delete mileage;
        mileage = NULL;
    }
    }

};

int main() {
    Car c1("maruti 800","white");
    Car c2(c1);

    c2.name = "Hyundai";

    return 0;
}
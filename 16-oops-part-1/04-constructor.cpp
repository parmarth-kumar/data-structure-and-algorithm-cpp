#include <iostream>
using namespace std;

class ReactangleArea{
    float length;
    float breadth;

public:
    ReactangleArea(float s) {
        cout << "constructor is called. object being created" << endl;
        length = s;
        breadth = s;
    }

    ReactangleArea(float length, float breadth) {
        cout << "constructor is called. object being created" << endl;
        this->length = length;
        this->breadth = breadth;
    }

    float getArea() {
        return length*breadth;
    }
};

int main() {
    ReactangleArea r1(5);
    cout << "Area of rectangle = " << r1.getArea() << endl;

    ReactangleArea r2(5,10);
    cout << "Area of rectangle = " << r2.getArea() << endl;

    return 0;
}

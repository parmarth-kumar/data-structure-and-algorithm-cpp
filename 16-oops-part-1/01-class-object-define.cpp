#include <iostream>
using namespace std;

// creating class
class Student {
    // properties
    string name;
    float cgpa;

    // methods
    void getPercentage() {
        cout << (cgpa*10) << "%\n";
    }
};

int main(){
    Student s1; // creating object
    cout << sizeof(s1) << endl; // size allocated to object

    return 0;
}
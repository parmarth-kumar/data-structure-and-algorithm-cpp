#include <iostream>
using namespace std;

// creating class
class Student {
    private:    
    // properties
    string name;
    float cgpa;

public:    
    // methods
    void getPercentage(){
        cout << (cgpa * 10) << "\n";
    }

    // Setters
    void setName(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    // getters
    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1; //object
    s1.setName("parmarth");
    s1.setCgpa(9.67);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    return 0;
}
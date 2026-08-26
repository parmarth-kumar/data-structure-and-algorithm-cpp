// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.

#include <iostream>
#include <math.h>
using namespace std;

int calculate(int a, int b) {
    return pow(a,2) + pow(b,2) + (2*a*b);
}

int main(){
    cout << calculate(2 , 3) << endl;

    return 0;
}
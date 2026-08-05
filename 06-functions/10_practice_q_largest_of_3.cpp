// Question 4 : Write a function that prints the largest of 3 numbers.
#include <iostream>
#include <algorithm>
using namespace std;

int largest_of_three(int a, int b, int c){
    if ((a >= b) && (a >= c)) {
        return a;
    }
    else if (b >= c) {
        return b;
    }
    else {
        return c;
    }
    // int largest = max(a, max(b, c));
    // int largest = max({a, b, c});
    // return largest;

}

int main(){
    cout << largest_of_three(23,34,52) << endl;
    cout << largest_of_three(23,23,23) << endl;
    cout << largest_of_three(23,34,52) << endl;


    return 0;
}
// TWO POINTERS APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

// Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)

#include <iostream>
#include <string>
using namespace std;

int n = 123218; //54321
string num_in_str = to_string(n);
int n = num_in_str.size() ;
int mid = (n/2);


int main(){
    bool isPalindrome = true;
    
    for(int i=0; i<=mid;i++){
        if (num_in_str[i] != num_in_str[n-i-1]) {
            isPalindrome = false;
            break;
        }

    }

    if (isPalindrome) {
        cout << "is palindrome";
    }
    else {
        cout << "not a palindrome";
    }

    return 0;
}
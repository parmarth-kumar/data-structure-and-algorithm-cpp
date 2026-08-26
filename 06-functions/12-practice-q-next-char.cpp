// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.

#include <iostream>
using namespace std;

char nextChar(char ch) {
    if (ch == 'z') {
        return 'a';
    }
    else {
        return ++ch;
    }

    // return ch=='z'?'a':++ch;

}

int main(){
    cout<<nextChar('j')<<endl;
    cout<<nextChar('z')<<endl;

    return 0;
}
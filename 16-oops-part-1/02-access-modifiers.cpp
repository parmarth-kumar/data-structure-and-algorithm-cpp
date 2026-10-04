#include <iostream>
using namespace std;

// creating class
class BankAccount {

public:
    string accountHolder;


private:
    float balance;

    // methods
    void getBalance() {
        cout << balance << "\n";
    }
};

int main(){
    BankAccount a1; // creating object
    a1.accountHolder = "Raman";
    cout << a1.accountHolder << endl;
    // a1.balance = 100000;

    return 0;
}
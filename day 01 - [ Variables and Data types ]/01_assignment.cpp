#include <iostream>
using namespace std;

/*Question 1 : In a program, input the side of a square. You have to output the
area of the square. Input : n (side) Output : n*n (area)*/

int area(int n) {
    return n * n;
}

/*Question 2 : Enter cost of 3 items from the user (using float data type)- a
pencil, a pen and an eraser. You have to output the total cost of the items back
to the user as their bill. (Add on : You can also try adding 18% GST tax to the
items in the bill as an advanced problem)*/

/* Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)
Output : (P*R*T) / 100 */

int main() {
  // solution 1
  
  int n;
  cout << "enter side n: ";
  cin >> n;

  int result = area(n);
  cout << "area of square : " << result << endl;

//   int area;
//   int n;

//   cout << "enter side n\n";
//   cin >> n;

//   area = n * n;
//   cout << "area of square : " << area << endl;

  // solution 2

  float pencil;
  cout << "enter price of pencil\n";
  cin >> pencil;

  float pen;
  cout << "enter price of pen\n";
  cin >> pen;

  float eraser;
  cout << "enter price of eraser\n";
  cin >> eraser;

  float bill = (pencil + pen + eraser);
  cout << "bill without gst : " << bill << endl;

  float final_bill = bill + (bill) * 0.18;
  cout << "final bill with gst : " << final_bill << endl;

  return 0;
}

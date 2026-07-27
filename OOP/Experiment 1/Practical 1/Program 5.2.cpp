/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to swap two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}
// Code by Anom Meshram
// Class: SY CSE, Div: B, RollNo: 21

// Program to perform basic arithmetic operations on two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << (float)a / b << endl;

    return 0;
}
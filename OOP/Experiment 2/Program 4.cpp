/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to demonstrate the use of new and delete operators

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "You entered: " << *ptr << endl;
    delete ptr;

    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to check whether a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is Even.";
    else
        cout << num << " is Odd.";

    return 0;
}
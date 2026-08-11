/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to demonstrate the use of setw() function in C++

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int marks [5];
    cout << "Enter marks of 5 subjects: \n";
    for (int i = 0; i < 5; i++)
        cin >> marks[i];

        cout << setw(10) << "Subject" << setw(10) << "Marks" << endl;
    for (int i = 0; i < 5; i++)

    cout << setw(10) << "Subject " << i + 1 << setw(10) << marks[i] << endl;

    return 0;
}   
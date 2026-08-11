/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to demonstrate the use of scope resolution operator

#include <iostream>
using namespace std;
int num = 100;
int main() {
    int num = 50;
    cout << "Global variable: " << ::num << endl;
    cout << "Local Variable: " << num << endl;
    
    return 0;
}
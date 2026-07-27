/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to convert distance from kilometers to meters and centimeters

#include <iostream>
using namespace std;

int main() {
    float km, meter, centimeter;

    cout << "Enter Distance in KM: ";
    cin >> km;

    meter = km * 1000;
    centimeter = km * 100000;

    cout << "Meters = " << meter << endl;
    cout << "Centimeters = " << centimeter;

    return 0;
}
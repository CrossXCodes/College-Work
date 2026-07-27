/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to convert temperature from Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit;

    return 0;
}
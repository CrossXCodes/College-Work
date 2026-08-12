/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to calculate area of rectangle using type casting

#include <iostream>
using namespace std;
int main() {
    double length, breadth;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    int area_int = (int)(length * breadth);
    float area_float = (float)(length * breadth);
    cout << "Area of rectangle (int): " << area_int << endl;
    cout << "Area of rectangle (float): " << area_float << endl;

    return 0;
}
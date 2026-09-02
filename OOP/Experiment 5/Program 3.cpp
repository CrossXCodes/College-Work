/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find area of circle using inline function

#include <iostream> 
using namespace std;

class Circle {
    public:
        inline float area (float r){
            return 3.14 * r * r;
        }
};

int main() {
    Circle ();
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle with radius " << radius << " is: " << Circle().area(radius) << endl;
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to calculate area of circle using class and object

#include <iostream>
using namespace std;
class Circle{
    public:
    float r, area;
    void accept()
    {
        cout << "Enter radius: ";
        cin >> r;
    }
    void calculator()
    {
        area = 3.14 * r * r;
    }
    void display()
    {
        cout << "Area of circle: " << area << endl;
    }
};
int main() {
    Circle c;
    c.accept();
    c.calculator();
    c.display();

    return 0;
}
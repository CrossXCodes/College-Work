/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find sum of two numbers using friend function

#include <iostream>
using namespace std;

class B;
class A {
    int x;
public:
    void getData() {
        cout << "Enter value of a: ";
        cin >> x;
    }
    friend int add(A, B);
};

class B {
    int y;
public:
    void getData() {
        cout << "Enter value of b: ";
        cin >> y;
    }
    friend int add(A, B);
};

int add(A a, B b) {
    return (a.x + b.y);
}

int main() {
    A a;
    B b;
    a.getData();
    b.getData();
    cout << "Sum of a and b is: " << add(a, b) << endl;
    return 0;
}
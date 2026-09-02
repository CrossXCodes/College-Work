/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find maximum of two numbers using friend function

#include <iostream> 
using namespace std;

class Number {
    int a, b;
public:
    void getData();
    friend void findmax(Number n);
};

void Number::getData() {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

void findmax(Number n) {
    int max = (n.a > n.b) ? n.a : n.b;
    cout << "Maximum: " << max << endl;
}

int main() {
    Number n;
    n.getData();
    findmax(n);
    return 0;
}
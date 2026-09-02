/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find average of three numbers using friend function

#include <iostream>
using namespace std;

class Number {
    int a, b, c;
public:
    void getData(){
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }
    friend void findAverage(Number n);
};

void findAverage(Number n) {
    float avg = (n.a + n.b + n.c) / 3.0;
    cout << "Average: " << avg << endl;
}

int main() {
    Number n;
    n.getData();
    findAverage(n);
    return 0;
}
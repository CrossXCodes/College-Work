/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to swap two numbers using inline function

#include <iostream> 
using namespace std;

class Swap {
    private:
        int a, b;
    public:
        void getData();
        inline void swap();
        void display();
};

void Swap::getData() {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

inline void Swap::swap() {
    int temp = a;
    a = b;
    b = temp;
}
void Swap::display() {
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}
int main() {
    Swap s;
    s.getData();
    s.swap();
    s.display();
    return 0;
}
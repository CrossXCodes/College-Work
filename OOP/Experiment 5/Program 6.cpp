/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find factorial of a number using inline function

#include <iostream> 
using namespace std;

inline int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}

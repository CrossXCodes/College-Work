/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find maximum of two numbers using inline function

#include <iostream> 
using namespace std;

class Maximum {
    public:
        inline int max (int a, int b){
            return (a > b) ? a : b;
        }
};

int main() {
    Maximum ();
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << Maximum().max(num1, num2) << endl;
    return 0;
}
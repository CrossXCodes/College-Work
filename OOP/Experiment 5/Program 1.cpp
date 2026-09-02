/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find cube of a number using inline function

#include <iostream> 
using namespace std;

class Cube {
    public:
        inline int cube (int n){
            return n*n*n;
        }
};

int main() {
    Cube ();
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " is: " << Cube().cube(num) << endl;
    return 0;
}
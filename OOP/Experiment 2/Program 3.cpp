/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to demonstrate the use of namespace

#include <iostream>
using namespace std;

namespace Phy {
    string sub = "Physics";
    int marks = 87;
}

namespace Chem {
    string sub = "Chemistry";
    int marks = 72;
}

int main() {
    cout << "Subject 1: " << Phy::sub << endl;
    cout << "Marks: " << Phy::marks << endl;

    cout << "Subject 2: " << Chem::sub << endl;
    cout << "Marks: " << Chem::marks << endl;
    
    return 0;
}
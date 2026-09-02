/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find volume of cube using inline function

#include <iostream>
#include <cmath>
using namespace std;
class Vol{
    private:
    int side;
    public:
    void volume();
};
inline void Vol::volume() {
    cout << "Enter length of side: ";
    cin >> side;
    cout << endl;
    cout << "Volume of Cube is: " << pow(side, 3) << endl;
}
int main(){
    Vol cube;
    cube.volume();
    return 0;
}
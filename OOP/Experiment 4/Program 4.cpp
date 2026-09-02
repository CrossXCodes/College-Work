/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find square of a number using class and object

#include<iostream>
#include<cmath>
using namespace std;
class Squared{
    private:
    float num;
    double squared;
    public:
    double square(){
        cout << "Enter a num: ";
        cin >> num;
        squared = pow(num, 2);
        return squared;
    }
};
int main(){
    double sq;
    Squared e;
    sq = e.square();
    cout << endl;
    cout << "Square is: " << sq << endl;
    return 0;
}
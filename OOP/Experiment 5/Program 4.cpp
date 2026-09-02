/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find simple interest using inline function

#include <iostream> 
using namespace std;

class Intrest {
    private:
        float principal, rate, time;
    public:
    void getData();
    inline float calulate();
};

void Intrest::getData() {
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;
}

inline float Intrest::calulate() {
    return (principal * rate * time) / 100;
}

int main() {
    Intrest i;
    i.getData();
    cout << "Simple Interest is: " << i.calulate() << endl;
    return 0;
}
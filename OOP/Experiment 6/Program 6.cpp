/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to swap private data of two numbers using friend function

#include <iostream>
using namespace std;

class Cls2;
class Cls1{
    private:
    int num1;

    public:
    void acc(){
        cout << "Enter a number: ";
        cin >> num1;
    }
    friend void swap(Cls1 &x, Cls2 &y);
};
class Cls2{
    private:
    int num2;
    public:
    void acc(){
        cout << "Enter second number: ";
        cin >> num2;
    }
    friend void swap(Cls1 &x, Cls2 &y);
};

void swap(Cls1 &x,Cls2 &y){
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;

    cout << endl;
    cout << "1st Number is: " << x.num1 << endl;
    cout << "2nd Number is: " << y.num2 << endl;
}
int main(){
    Cls1 g;
    Cls2 hj;
    g.acc();
    hj.acc();
    swap(g, hj);
    return 0;
}
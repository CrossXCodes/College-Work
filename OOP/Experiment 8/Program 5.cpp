/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Staff with data members name, post, salary and member functions accept() to accept the details of staff and display() to display the details of staff.

#include <iostream>
#include <string.h>
using namespace std;

class Staff{
    float salary;
    string name, post;

    public:
        void accept(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter post: ";
            cin >> post;
            cout << "Enter Salary: ₹";
            cin >> salary;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Post: " << post << endl;
            cout << "Salary: ₹" << salary << endl;
        }
} s[5];

int main (){
    for(int i=0;i=5;i++)
    s[i].accept();
    cout <<"\n Staff Details are: \n";
    for(int i=0;i<5;i++){
        s[i].display();
    }
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Student with data members roll number, name, percentage and member functions accept() to accept the details of student and display() to display the details of student whose percentage is greater than 75.

#include <iostream>
#include <string.h>
using namespace std;

class Student{
    int rollNo;
    string name;
    float percentage;

public:
    void accept(){
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void display(){
        if (percentage > 75) {
            cout << "Roll Number: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Percentage: " << percentage << endl;
        }
    }
} s[10];

int main() {
    for (int i = 0; i < 10; i++) {
        s[i].accept();
    }
    cout << "\nStudent Details (Percentage > 75):\n";
    for (int i = 0; i < 10; i++) {
        s[i].display();
    }
    return 0;
}
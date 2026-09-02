/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Student with data members name, roll number and member functions accept() to accept the details of student and display() to display the details of student.

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;

public:
    void accept() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Employee with data members id, name, post and member functions accept() to accept the details of employee and display() to display the details of employee. 

#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    int id;
    string name, post;
    
public:
    void accept(){
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Post: ";
        cin >> post;
    }
    void display(){
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Post: " << post << endl;
    }
} e[5];

int main (){
    for(int i=0;i<5;i++)
    e[i].accept();
    cout <<"\n Employee Details are: \n";
    for(int i=0;i<5;i++){
        e[i].display();
        cout << endl;
    }
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Coustomer with data members id, name and member functions accept() to accept the details of coustomer and display() to display the details of coustomer.

#include <iostream>
#include <string.h>
using namespace std;

class Coustomer{
    int id;
    string name;

public:
    void accept(){
        cout << "Enter Coustomer ID: ";
        cin >> id;
        cout << "Enter Coustomer Name: ";
        cin >> name;
    }
    void display(){
        cout << "Coustomer ID: " << id << endl;
        cout << "Coustomer Name: " << name << endl;
    }
} c[5];

int main (){
    for(int i=0;i<5;i++)
    c[i].accept();
    cout <<"\n Coustomer Details are: \n";
    for(int i=0;i<5;i++){
        c[i].display();
        cout << endl;
    }
    return 0;
}
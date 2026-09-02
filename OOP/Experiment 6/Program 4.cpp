/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Employee with data members name, id, post, salary and member function acc() to accept the details of employee and a friend function display() to display the details of employee.

#include <iostream>
using  namespace std;

class Employee{
    private:
    int id;
    long salary;
    string name;
    string post;

    public:
    void acc(){
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter post: ";
        getline(cin, post);
        cout << "Enter Salary: ₹";
        cin >> salary;
        cout << "Enter Employee-id: ";
        cin >> id;
    }
    friend void display(Employee s);
};

void display(Employee s){
    cout << endl;
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Post: " << s.post << endl;
    cout << "Salary: ₹" << s.salary << endl;
}

int main() {
    Employee t;
    t.acc();
    display(t);
    return 0;
}
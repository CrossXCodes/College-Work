/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Employee with data members name, id, post, salary and member function acc() to accept the details of employee and a friend function compare() to compare the details of two employees.

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
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter post: ";
        getline(cin, post);
        cout << "Enter Salary: ₹";
        cin >> salary;
        cout << "Enter Employee-id: ";
        cin >> id;
    }
    friend void compare(Employee s1, Employee s2);
};

void compare(Employee s1, Employee s2){
    if(s1.salary > s2.salary){
        cout << s1.name << " " << "Has more salary than " << s2.name << endl;
    }else{
        cout << s2.name << " " << "Has more salary than " << s2.name << endl;
    }

    if(s1.id > s2.id){
        cout << s1.name << " " << "Has more priority than " << s2.name << endl;
    }else{
        cout << s2.name << " " << "Has more priority than " << s1.name << endl;
    }
}

int main() {
    Employee t, y;
    t.acc();
    y.acc();
    compare(t, y);
    return 0;
}
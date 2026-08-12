/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to demonstrate the use of class and object

#include <iostream>
using namespace std;
class Staff{
    public:
    int id;
    string post;
    void accept()
    {
        cout << "Enter staff id: ";
        cin >> id;
        cout << "Enter staff post: ";
        cin >> post;
    }
    void display()
    {
        cout << "Staff id: " << id << endl;
        cout << "Staff post: " << post << endl;
    }
};
int main() {
    Staff s1, s2;
    s1.accept();
    s1.display();
    s2.accept();
    s2.display();

    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Account with data members account number, name, balance and member functions accept() to accept the details of account and display() to display the details of account.

#include <iostream>
#include <string>
using namespace std;

class Account {
    int accountNumber;
    string name;
    float balance;

public:
    void accept();
    void display();
};

void Account::accept() {
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter balance: ";
    cin >> balance;
}

void Account::display() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

int main() {
    Account acc;
    acc.accept();
    acc.display();
    return 0;
}
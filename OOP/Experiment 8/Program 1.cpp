/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Book with data members bookId, bookName, bookPrice and member functions accept() to accept the details of book and display() to display the details of book.

#include <iostream>
#include <string>
using namespace std;

class Book {
    int bookId;
    string bookName;
    float bookPrice;

public:
    void accept(){
        cout << "Enter book ID: ";
        cin >> bookId;

        cout << "Enter book name: ";
        cin >> bookName;

        cout << "Enter book price: ";
        cin >> bookPrice;
    }
    void display(){
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Book Price: " << bookPrice << endl;
    }
} b[5];

int main (){
    for(int i=0;i<5;i++)
    b [i].accept();
    cout <<"\n Book Details are: \n";
    for(int i=0;i<5;i++){
        b[i].display();
        cout << endl;
    }
    return 0;
}
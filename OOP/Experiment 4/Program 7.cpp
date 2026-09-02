/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to create a class Product with data members product ID, name, price and member functions accept() to accept the details of product and display() to display the details of product.

#include <iostream>
#include <string>
using namespace std;

class Product {
    int productId;
    string productName;
    float productPrice;

public:
    void accept();
    void display();       
};
void Product::accept() {
    cout << "Enter product ID: ";
    cin >> productId;

    cout << "Enter product name: ";
    cin >> productName;

    cout << "Enter product price: ";
    cin >> productPrice;
}

void Product::display() {
    cout << "Product ID: " << productId << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Price: " << productPrice << endl;
}

int main() {
    Product p;
    p.accept();
    p.display();
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to search an element in an array

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            cout << "Element found at position: " << i + 1 << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element not found." << endl;
    }
    delete[] arr;
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to search an element in a vector

#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <string> list = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
    string target;
    int found_index = -1;
    cout << "Enter a fruit to search: ";
    cin >> target;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == target) {
            found_index = i;
            break;
        }
    }
    if (found_index != -1) {
        cout << "Fruit found at index: " << found_index << endl;
    } else {
        cout << "Fruit not found." << endl;
    }
    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find largest element in an array

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int largest = arr[0];
    for(int i=0; i<10; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    return 0;
}
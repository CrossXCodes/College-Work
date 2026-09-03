/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find largest element in an array

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int smallest = arr[0];
    for(int i=1; i<10; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest element: " << smallest << endl;
    return 0;
}

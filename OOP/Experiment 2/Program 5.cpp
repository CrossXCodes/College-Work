/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to demonstrate the use of dynamic memory allocation

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << (float)sum / n << endl;
    delete[] arr;

    return 0;
}
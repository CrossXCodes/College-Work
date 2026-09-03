/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to count occurrences of a substring in a string

#include <iostream>
using namespace std;

int main(){
    string text = "hello world , hello everyone";
    string target = "hello";
    int count = 0;
    size_t pos = text.find(target, 0);
    while(pos != string::npos){
        count++;
        pos = text.find(target, pos + target.length());
    }
    cout << "The target string was found " << count << " times." << endl;
    return 0;
}
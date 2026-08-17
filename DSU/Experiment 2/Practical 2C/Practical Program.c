/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to check whether a number is ODD or EVEN

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    if((num & 1) > 0){
        printf("\n The number is ODD number.");
    }else{
        printf("\n The number is EVEN number.");
    }

    return 0;
}
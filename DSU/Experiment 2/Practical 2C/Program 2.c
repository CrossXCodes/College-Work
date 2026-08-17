/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to count number of odd numbers in an array

#include <stdio.h>
int main (){
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter Value: ");
        scanf("%d" , &arr[i]);
    }
    int counter = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            counter++;
        }
    }
    printf("\nNumber of odd numbers in the array are: %d", counter);
    return 0;
}
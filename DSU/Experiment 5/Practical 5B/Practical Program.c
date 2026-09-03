/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to sort an array of strings in descending order using bubble sort

#include <stdio.h>
#include <string.h>

int main (){
    char arr[5][20], temp[20];
    int i, j;
    printf("Enter 5 strings:\n");
    for(i=0;i<5;i++){
        scanf("%s", arr[i]);
    }

    // Bubble sort
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(strcmp(arr[j], arr[j+1]) > 0){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }

    printf("Sorted strings are:\n");
    for(i=0;i<5;i++){
        printf("%s\n", arr[i]);
    }
    return 0;
}
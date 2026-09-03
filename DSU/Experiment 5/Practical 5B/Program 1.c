/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to sort an array of strings in descending order using bubble sort

#include <stdio.h>
#include <string.h>

int main (){
    char str[5][20], temp[20];
    int i, j;
    printf("Enter 5 strings:\n");
    for(i=0;i<5;i++){
        scanf("%s", str[i]);
    }

    // Bubble sort
    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(strcmp(str[j], str[j+1]) < 0){
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }

    printf("strings are in descending order:\n");
    for(i=0;i<5;i++){
        printf("%s\n", str[i]);
    }
    return 0;
}
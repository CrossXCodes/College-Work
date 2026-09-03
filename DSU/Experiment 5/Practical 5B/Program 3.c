/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to find the longest string in an array of strings using bubble sort

#include <stdio.h>
#include<string.h>

int main() {
    char temp[100];
    int n;
    printf("Enter lenght: ");
    scanf("%d", &n);
    getchar();
    char arr[n][100];
    for(int i=0;i<n;i++){
        printf("Enetr Value: ");
        fgets(arr[i], sizeof(arr[i]), stdin);
    }
    //bubble sort:

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strcmp(arr[j], arr[j + 1]) < 0){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
    printf("\nLongest String is: %s", arr[0]);

    return 0;
}
/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to search an element in an array using binary search

#include <stdio.h>
#include <string.h>

int search (char str[][100], int low, int high, char target[]){
    if(low > high){
        return -1;
    }
    int mid = (low + high) / 2;
    if(strcmp(str[mid], target) > 0){
        return mid;
    }
    else if (strcmp(str[mid], target) < 0){
        return search(str, mid + 1, high, target);
    }
    else{
        return mid;
    }
};
int main (){
    int n, position;
        char str[50][100], target[100];
            printf("Enter no of elements: ");
            scanf("%d", &n);
            printf("Enter elements in sorted order:\n");
            for(int i=0;i<n;i++){
                scanf("%s", str[i]);
            }
            printf("Enter string to search: ");
            scanf("%s", target);
            position = search(str, 0, n - 1, target);
            if(position != -1){
                printf("Element found at position %d\n", position + 1);
                }
                else{
                    printf("Element not found\n");
                }
    return 0;
}
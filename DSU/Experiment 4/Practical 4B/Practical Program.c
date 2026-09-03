/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to search an element in an array using binary search

#include <stdio.h>
#include <string.h>

int main (){
    int n, low, high, mid, found = 0;
    char str[50][100], target[100];
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order:\n");
    for(int i=0;i<n;i++){
        scanf("%s", str[i]);
        printf ("Enter string to search: ");
        scanf("%s", target);
        low = 0;
        high = n - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (strcmp(str[mid], target) == 0) {
                printf("Element found at position %d\n", mid + 1);
                found = 1;
                break;
            }
            else if (strcmp(str[mid], target) > 0) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        if (!found) {
            printf("Element not found\n");
        }
    }
    return 0;
}
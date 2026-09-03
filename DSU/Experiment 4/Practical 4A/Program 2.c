/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// Program to search an element in an array using binary search

#include <stdio.h>
int binary_search(int arr[], int target, int low, int high){
    if(low > high){
        return -1;
    }
    int mid = low + (high - low) / 2;
    if(arr[mid] == target){
        return mid;
    }
    if(target < arr[mid]){
        return binary_search(arr, target, low, mid - 1);
    }
    return binary_search(arr, target, mid + 1,high);
}

int main (){
    int arr[50], n, target;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements in descending order:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    int k = binary_search(arr, target, 0, n-1);
    if(k != -1){
        printf("Element found at position %d", k+1);
    }else{
        printf("Element not found");
    }
    return 0;
}
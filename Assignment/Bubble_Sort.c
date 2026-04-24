// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The correct order is ascending (increasing order). The pass through the list is repeated until the list is sorted.

// 'n' elements are sorted in 'n-1' passes.
// After every pass, we need to apply bubble sort on the unsorted part of the array only & we do not neeed to check the largest element as it is already sorted.

// Here is an implementation of the Bubble Sort algorithm in C: 

#include <stdio.h>
int main() {
    int arr[5] = {5,1,3,2,4};
    int n = 5;
    int i, j, temp;
    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {   // Outer loop for number of passes
        for (j = 0; j < n - 1 - i; j++) {   // Inner loop for swapping adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
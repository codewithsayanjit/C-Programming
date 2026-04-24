// Insertion Sort is a simple sorting algorithm that builds a sorted array (or list) one element at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.
// The correct order is ascending (increasing order). The algorithm works by taking elements from the unsorted part and inserting them at the correct position in the sorted part.
// 1) Swapping from end till the element is placed at correct position.
// 2) Swap happens only when the element is smaller than its left element.


// Here is an implementation of the Insertion Sort algorithm in C:
#include <stdio.h>
int main() {
    int arr[5] = {5, 1, 3, 2, 4};
    int n = 5;
    int i, key, j;
    // Insertion Sort Algorithm
    for (i = 1; i <= n-1; i++) {
        key = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
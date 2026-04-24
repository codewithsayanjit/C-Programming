/* C program to print left half pyramid pattern with repeated numbers
   For n = 5
       1
      22
     333
    4444
   55555
*/

#include<stdio.h>

int main() {
    int n = 5; // Number of rows
    int  i, j,k;

    // Outer loop for the number of rows
    for (i = 1; i <= n; i++) {
        for (j = n-1; j>=i; j--) { // Print spaces
            printf(" ");
        }
        for (k = 1; k <= i; k++) { // Print numbers
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
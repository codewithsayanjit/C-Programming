/* C program to print a left half pyramid pattern of stars
Example for n=5:
    *
   **
  ***
 ****
***** 
*/

#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    int  i, j,k;

    // Outer loop for the number of rows
    for (i = 1; i <= n; i++) {
        for (j = n-1; j>=i; j--) { // Print spaces
            printf(" ");
        }
        for (k = 1; k <= i; k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
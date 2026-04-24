/* Pyramid Star Pattern
    * 
   * *
  * * *
 * * * *
* * * * *
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
            printf("* "); // White space after star to maintain symmetry
        }
        printf("\n");
    }
    return 0;
}
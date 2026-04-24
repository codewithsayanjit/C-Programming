/* C program to print reverse full pyramid star pattern
* * * * * * 
 * * * * *
  * * * *
   * * *
    * *
     *
*/

#include <stdio.h>
int main() {
    int n=6;
    int i, j,k;  // Number of rows
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
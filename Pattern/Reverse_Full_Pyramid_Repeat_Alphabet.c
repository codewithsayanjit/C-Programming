/* C program to print the following pattern
   a a a a a a
    b b b b b
     c c c c
      d d d
       e e
        f
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
            printf("%c ",j+96); // ASCII value of 'a' is 97
        }
        printf("\n");
    }
    return 0;
}
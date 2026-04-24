/* Inverted Left Half Pyramid Star Pattern
Example for rows = 6*/
//******(0 space + 6 stars) 
// *****(1 spaces + 5 stars)    
//  ****(2 spaces + 4 stars)
//   ***(3 spaces + 3 stars)
//    **(4 spaces + 2 stars)
//     *(5 spaces + 1 stars)

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
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
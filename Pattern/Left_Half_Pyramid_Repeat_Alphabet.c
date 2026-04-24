/* C program to print left half pyramid pattern with repeated alphabets
   For n = E
       A
      BB
     CCC
    DDDD
   EEEEE
*/
#include<stdio.h>
int main() {
    int n = 'E'; // Number of rows
    int  i, j,k;

    // Outer loop for the number of rows
    for (i = 'A'; i <= n; i++) {
        for (j = n-1; j>=i; j--) { // Print spaces
            printf(" ");
        }
        for (k = 'A'; k <= i; k++) { // Print numbers
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}
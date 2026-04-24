// write a program to print right triangle number pattern
/*Print the following pattern with the number of rows taken from the user.
Output :
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) { // outer loop for rows
        for(j = 1; j <= i; j++) { // inner loop for printing numbers in each row.
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
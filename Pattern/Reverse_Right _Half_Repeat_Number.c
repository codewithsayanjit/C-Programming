/* C Program to Print Reverse Right Half Pyramid Pattern with Numbers
Output :
5 5 5 5 5 
4 4 4 4
3 3 3
2 2
1
*/
#include <stdio.h>
int main() {
    int i,j;
    for (i = 5; i >= 1; i--) { // Outer Loop for rows
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
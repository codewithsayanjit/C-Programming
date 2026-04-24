/*Print the following pattern with the number of rows taken from the user.
a 
b b
c c c
d d d d
e e e e e
*/

#include <stdio.h>
int main() {
    int i, j;
    for(i = 'a'; i <= 'e'; i++) { // outer loop for rows 
        for(j = 'a'; j <= i; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}
/* C Program to Print Reverse Right Half Triangle Alphabet Pattern
Write a program in C to print the following pattern:
Output :
E E E E E
D D D D
C C C
B B
A 
*/

#include <stdio.h>
int main() {
    int i,j;
    for (i = 'E'; i >= 'A'; i--) { // Outer Loop for rows
        for (j = 'A'; j <= i; j++) {
            printf("%c ", i);
        }
        printf("\n"); // New line after each row
    }
    return 0;
}                                //OR
/*
#include <stdio.h>
int main() {
    int i,j;
    for (i = 4; i >= 0; i--) { // Outer Loop for rows
        for (j = 0; j <= i; j++) {
            printf("%c ", i + 65); // ASCII value of 'A' is 65
        }
        printf("\n"); // New line after each row
    }
    return 0;
}*/
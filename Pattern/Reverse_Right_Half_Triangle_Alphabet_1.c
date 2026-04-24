/*
Write a program in C to print the following pattern:
Output :
A A A A A 
B B B B
C C C
D D
E
*/


#include <stdio.h>
int main() {
    int i,j;
    for (i = 'A'; i <= 'E'; i++) { // Outer Loop for rows
        for (j = 'E'; j >= i; j--) {
            printf("%c ", i);
        }
        printf("\n"); // New line after each row
    }
    return 0;
}                                //OR
/*#include <stdio.h>
int main() {
    int i,j;
    for (i = 0; i <= 4; i++) { // Outer Loop for rows
        for (j = 4; j >= i; j--) {
            printf("%c ", i + 65); // ASCII value of 'A' is 65
        }
        printf("\n"); // New line after each row
    }
    return 0;
}*/       
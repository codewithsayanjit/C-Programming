// This program prints a pyramid pattern of alphabets where odd rows contain lowercase letters and even rows contain uppercase letters.
/* Output:
a
B B
c c c
D D D D
e e e e e
F F F F F F
g g g g g g g
H H H H H H H H
i i i i i i i i i
J J J J J J J J J J */


#include <stdio.h>
int main() {
    int rows = 10;
    int i,j;
    char ch = 'a';
    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= i; j++) {
            // Print lowercase if row is odd, uppercase if row is even
            if (i % 2 == 1){    
                printf(" %c ", ch);
            }
            else{
                printf(" %c ", ch - 32); // convert to uppercase
            } 
        }
        printf("\n");
        ch++;
    }
    return 0;
}
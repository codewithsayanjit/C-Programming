// This code prints a Inverted Right half pyramid star pattern of numbers based on user input for the number of rows.
// Output :
//* * * * * 
//* * * *
//* * *
//* *
//*


#include <stdio.h>
int main() {
    int i,j;
    for (i = 1; i <= 5; i++) { // Outer Loop for rows
        for (j = 5; j >= i; j--) {
            printf("* ");
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
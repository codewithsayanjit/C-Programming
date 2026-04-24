// Write a Program to print the following pattern
// A
//  AB
//   ABC
//    ABCD
//     ABCDE
//      ABCDEF


#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 6; i++) { // outer loop for rows
        for(j = 1; j <= i; j++){ // Print leading spaces
            printf(" ");
        }
        for(j = 0; j < i; j++){  // Print letters
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
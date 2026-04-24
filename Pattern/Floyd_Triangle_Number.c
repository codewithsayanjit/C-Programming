// This code prints a pyramid pattern of numbers based on user input for the number of rows.
/* Output:
Enter number of rows: 5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>
int main() {
    int rows;
    int i,j;
    int num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
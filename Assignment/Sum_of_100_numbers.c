// Write a C program to find out the sum of first 100 numbers.

#include <stdio.h>
int main() {
    int i = 1;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;  // sum = sum + i
        i++;  // i = i + 1
    }
    printf("The sum of the first 100 numbers is: %d\n", sum);
    return 0;
}
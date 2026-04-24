// Reverse a number in C
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num != 0) { // loop until num becomes 0
        remainder = num % 10; // get last digit
        reversed = reversed * 10 + remainder; // append it to reversed
        num = num / 10; // remove last digit from num
    }
    printf("Reversed Number: %d\n", reversed);
    return 0;
}
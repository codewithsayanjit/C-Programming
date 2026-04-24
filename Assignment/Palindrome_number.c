// Given a number tell if it is palindrome or not
#include <stdio.h>
int main() {
    int n, reversed = 0, remainder, original;
    printf("Enter a number : ");
    scanf("%d", &n);
    original = n;
    while (n != 0) { // The loop continues as long as n is not zero.
        remainder = n % 10; // get last digit.
        reversed = reversed * 10 + remainder; // append it to reverse.
        n = n / 10; // remove the last digit.
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
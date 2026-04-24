// WAP to find out the sum of first 100 cube numbers.

#include <stdio.h>
int main() {
    int sum = 0;
    int i = 1;
    while (i <= 100) {
        sum += i * i * i;  // sum = sum + (i * i * i)
        i++;  // i = i + 1
    }
    printf("The sum of the cubes of the first 100 numbers is: %d\n", sum);
    return 0;
}

// Output: The sum of the cubes of the first 100 numbers is: 25502500

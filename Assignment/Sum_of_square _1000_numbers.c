// WAP to find out the sum of square of first 1000 numbers.

#include <stdio.h>
int main() {
    int sum = 0;
    int i = 1;
    while (i <= 1000) {
        sum += i * i;  // sum = sum + (i * i)
        i++;  // i = i + 1
    }
    printf("The sum of the square of the first 1000 numbers is: %d\n", sum);
    return 0;
}
// Output: The sum of the squares of the first 1000 numbers is: 333833500
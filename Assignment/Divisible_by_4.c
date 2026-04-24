// Take a positive integer (say x) from the user. Check which numbers from 1 to x are divisible by 4. Print in following way 

#include <stdio.h>
int main() {
    int x;
    printf("Enter a positive number: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        if (i % 4 == 0) {
            printf("%d is divisible by 4\n", i);
        } else {
            printf("%d is not divisible by 4\n", i);
        }
    }
    return 0;
}
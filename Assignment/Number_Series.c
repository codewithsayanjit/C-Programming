// Take a positive integer from the user. If it is even, print all the numbers starting from -1 to that number. 
// If it is odd, print in descending order starting from that number and go to -5

#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (int i = -1; i <= n; i++) { // i++ equals i = i + 1
            printf("%d ", i);
        }
    } else {
        for (int i = n; i >= -5; i--) { // i-- equals i = i - 1
            printf("%d ", i);
        }
    }
    return 0;
}
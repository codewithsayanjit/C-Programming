// Take a positive float number (say n) from the user. Print from -n to n in increment of 0.5 

#include <stdio.h>
int main() {
    float n;
    printf("Enter a positive float number: ");
    scanf("%f", &n);
    for (float i = -n; i <= n; i += 0.5) { // i += 0.5 equals i = i + 0.5 ; += is called the addition assignment operator
        printf("%.2f ", i);
    }
    return 0;
}
// Take 3 lengths from the user and check if they form a triangle. 

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three lengths: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The lengths form a Triangle. \n");
    } else {
        printf("The lengths do not form a Triangle.\n");
    }
    return 0;
}

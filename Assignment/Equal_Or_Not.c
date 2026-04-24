// WAP in C to input 2 numbers and check if they are equal or not.

#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    if (x == y){
        printf("Both numbers are equal\n");
    } 
    else{
        printf("Numbers are not equal\n");
    }
    return 0;
}
// Make a simple calculator of 2 numbers. {a, b} , { +, -, *, /} 

#include <stdio.h>
int main() {
    float a, b, result;
    char op;
    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            result = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, result);
            break;

        case '-':
            result = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, result);
            break;

        case '*':
            result = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:   printf("Invalid operator!\n");
    }

    return 0;
}
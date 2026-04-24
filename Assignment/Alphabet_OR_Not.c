// Write a program to check whether a character entered through the keyboard is the alphabet or not.

#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } 
    else {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}
// WAP to find out the factorial of a number using while loop.
 #include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 1;         // initialize before while loop
    int  factorial = 1;
    while (i <= n) {
        factorial = factorial * i; // factorial *= i;
        i++;                   // increment inside while loop
    }
    printf("Final factorial is %d\n", factorial);
    return 0;
}

// WAP to find out the factorial of a number using do while loop.
 
/*#include<stdio.h>
int main(){
    int fact = 1;
    int i = 5;
    do {
        fact = fact*i;
        i = i -1; // i-- or i=i-1
    }while(i>=1);      // ';' is used after while
    printf("\n Result = %d", fact);
    return 0;

}*/ 

// WAP to find out the factorial of a number using for loop.
/*#include<stdio.h>
int main(){
    int i;
    int fact = 1;
    for(i=5;i>=1;i=i-1){ // i=i-1 or i--
        fact = fact*i;
    }
    printf("\n Result = %d",fact);
    return 0;
}*/
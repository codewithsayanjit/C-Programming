// Swap 2 numbers, a & b.(Interchange 2 numbers)
// Swap values of two variables using third variable. Solve this problem using call by value and call by reference procedures.

/*#include<stdio.h>
void swap(int a, int b);
int main(){
    int num1 = 3, num2 = 5;
    printf("x = %d & y = %d\n",num1,num2);
    swap(num1,num2);    // Call by value
    return 0;
}
void swap(int a,int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n ",a,b);
}*/

#include <stdio.h>
void _swap(int *a, int *b);
int main()
{
    int a = 3, b = 5;
    printf("a = %d & b = %d\n", a, b);
    _swap(&a, &b); // Call by reference
    return 0;
}
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("x = %d & y = %d\n", *a, *b);
}
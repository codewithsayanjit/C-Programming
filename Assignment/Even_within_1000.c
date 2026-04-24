// WAP to find out sum of all even numbers within 100 using do while loop.
#include<stdio.h>
int main(){
    int i = 2;
    int sum = 0;
    do
    {
        sum = sum+i ;
        i = i+2 ;
    } while (i<=1000);

    printf("\n Result = %d",sum);
    return 0;
    
}
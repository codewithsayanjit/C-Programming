//  WAP in C to input a Number and check if it is ODD or EVEN.

#include<stdio.h>
int main(){
    int number ;
    printf("Enter an integer: ");
    scanf("%d",&number);
    if(number %2 == 0){
        printf("%d is an even number\n", number);
    }else{
        printf("%d is an odd number\n", number);
    }
    return 0;
}
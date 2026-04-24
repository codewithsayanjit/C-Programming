// Check if a Number is Positive, Negative, or Zero. 

#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if(num > 0){
        printf("Positive");
    } else if(num < 0){
        printf("Negative");
    } else {
        printf("Zero");
    }
    return 0;
}
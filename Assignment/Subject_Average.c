// WAP in C to input 4 subject as user input and calculate its average

#include<stdio.h>
int main (){
    float a,b,c,d, average;
    printf("Enter the marks of Bengali:");
    scanf("%f",&a);
    printf("Enter the marks of English:");
    scanf("%f",&b);
    printf("Enter the marks of Math:");
    scanf("%f",&c);
    printf("Enter the marks of Chemistry:");
    scanf("%f",&d);

    average = (a+b+c+d)/4.0;
    printf("The average of four number is : %.2f \n ",average );
    return 0;
}
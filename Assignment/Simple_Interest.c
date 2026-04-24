// WAP in  C to input Principle, Rate of interest and time to print Simple Interest.

#include<stdio.h>
int main(){
    float p , r , t , si ;
    printf("Enter principal amount = ");
    scanf("%f", &p);
    printf("Enter rate of interest = ");
    scanf("%f", &r);
    printf("Enter time  = ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
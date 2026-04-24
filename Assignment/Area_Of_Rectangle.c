//  WAP in C to input length and breath and print the area of rectangle.

#include<stdio.h>
int main(){
    float length, width, area;
    printf("The length and width of rectangle is : ");
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("The area of rectangle is : %.2f\n", area);
    return 0;
}

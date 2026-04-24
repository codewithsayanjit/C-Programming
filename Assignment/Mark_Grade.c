// WAP in C to Input the marks of Physics , Chemistry and Mathematics. Find The Average and Print the Grade as follows:-
/* Above 80 - A
Above 60 - B
Above 50 - C
Below 50 - Fail */

#include <stdio.h>
int main() {
    float phy, chem, math, average;
    printf("Enter marks for Physics: ");
    scanf("%f", &phy);
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chem);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);
    average = (phy + chem + math) / 3.0;
    printf("Average marks: %.2f\n", average);
    if (average > 80) {
        printf("Grade: A\n");
    } else if (average > 60) {
        printf("Grade: B\n");
    } else if (average > 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }
    return 0;
}

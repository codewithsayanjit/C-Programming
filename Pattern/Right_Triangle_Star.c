/* C program to print Right Half Pyramid Star Pattern
the output will be:
* 
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
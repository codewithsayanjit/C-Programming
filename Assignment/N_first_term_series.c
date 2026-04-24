// Program to print first n terms of the series 2, 6, 12, 20, ...

#include <stdio.h>
int main()
{
    int i, term, n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = i * (i + 1); // Formula for the series: nth term = n * (n + 1)
        printf("%d, ", term);
    }
    return 0;
}
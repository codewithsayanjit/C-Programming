// A city records its temperature for 7 days.Write a program to store these temperatures and find: Average temperature of the week and Highest and Lowest temperature.

#include <stdio.h>
float avg(float arr[], int n);
float highest(float arr[], int n);
float lowest(float arr[], int n);
int main()
{
    float arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the temperatures for 7 days %d : ", i + 1);
        scanf("%f", &arr[i]);
    }
    printf("Average temperature of the week: %.2f\n", avg(arr, 7));
    printf("Highest temperature of the week: %.2f\n", highest(arr, 7));
    printf("Lowest temperature of the week: %.2f\n", lowest(arr, 7));
    return 0;
}
// Defining the functions
float avg(float arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
float highest(float arr[], int n)
{
    float highest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}
float lowest(float arr[], int n)
{
    float lowest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}
/*
Reverse a number and check if it is a palindrome or not using a function.
*/

#include <stdio.h>

// Function to check whether a number is palindrome or not
int isPalindrome(int n)
{
    int copy = n;       // Store the number for reversing
    int original = n;   // Store the original number for comparison
    int rev = 0;        // Variable to store the reversed number

    // Reverse the number
    while (copy)
    {
        rev = rev * 10 + copy % 10; // Add last digit to reversed number
        copy = copy / 10;           // Remove the last digit
    }

    // Compare reversed number with original number
    if (rev == original)
    {
        return 1; // Number is palindrome
    }
    else
    {
        return 0; // Number is not palindrome
    }
}

int main()
{
    int n;

    // Take input from the user
    printf("Enter Number to check for Palindrome: ");
    scanf("%d", &n);

    // Call the function and display the result
    if (isPalindrome(n))
    {
        printf("%d is Palindrome", n);
    }
    else
    {
        printf("%d is Not Palindrome", n);
    }

    printf("\n");

    return 0; // Indicate successful program execution
}
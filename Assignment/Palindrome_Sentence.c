/*3. Input a word or sentence and check whether it reads the same backward as forward,
ignoring spaces and case.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char str[]) {
    char cleaned[1000];
    int j = 0;

    // Remove non-alphabetic characters and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    // Check if cleaned string is a palindrome
    int start = 0;
    int end = j - 1;
    while (start < end) {
        if (cleaned[start] != cleaned[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char input[1000];
    printf("Enter a word or sentence: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
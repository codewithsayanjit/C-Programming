/*4. A store keeps track of the weights (in grams) of chocolate bars available.
Write a program that sorts the chocolates in ascending order of weight for packaging
purposes.*/


#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Ask user for number of chocolate bars
    printf("Enter the number of chocolate bars: ");
    scanf("%d", &n);

    int weights[n];

    // Input weights from user
    printf("Enter the weights (in grams):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (weights[j] > weights[j + 1]) {
                temp = weights[j];
                weights[j] = weights[j + 1];
                weights[j + 1] = temp;
            }
        }
    }

    // Display sorted weights
    printf("Sorted chocolate weights (in grams):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", weights[i]);
    }
    printf("\n");

    return 0;
}
/*
A school maintains a list of student roll numbers in an array.Write a program to insert a new student's roll number at a specific position(e.g., middle or end) and later, a student leaves school -  delete their roll number from the list.
*/


#include <stdio.h>

int main() {
    int roll[100], n, i, pos, new_roll, del_roll;

    // Input initial number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input roll numbers
    printf("Enter the roll numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &roll[i]);
    }

    // Insert a new roll number
    printf("Enter the new roll number to insert: ");
    scanf("%d", &new_roll);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i > pos; i--) {
            roll[i] = roll[i - 1];
        }
        roll[pos] = new_roll;
        n++;
        printf("Roll number inserted.\n");
    }

    // Display updated list
    printf("Updated roll numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", roll[i]);
    }
    printf("\n");

    // Delete a roll number
    printf("Enter the roll number to delete: ");
    scanf("%d", &del_roll);

    int found = 0;
    for (i = 0; i < n; i++) {
        if (roll[i] == del_roll) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
            }
            n--;
            break;
        }
    }

    if (found) {
        printf("Roll number deleted.\n");
    } else {
        printf("Roll number not found.\n");
    }

    // Display final list
    printf("Final roll numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", roll[i]);
    }
    printf("\n");

    return 0;
}
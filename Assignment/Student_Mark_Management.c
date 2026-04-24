/*1. Create a program to store details of 5 students such as roll number, name, and marks
in five subjects. Display all student details along with their average marks, and
identify the student who scored the highest average.*/
#include <stdio.h>

struct Student {
    int Roll;
    char Name[20];
    int Marks[5];
    float Average;
};

int main() {
    struct Student s[5];
    int highestMark = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter Your Name: ");
        scanf("%s", s[i].Name);

        printf("Enter Your Roll no.: ");
        scanf("%d", &s[i].Roll);

        printf("Enter your marks in this order (Maths, Physics, Chemistry, Programming, English): ");
        int total = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%d", &s[i].Marks[j]);
            total += s[i].Marks[j];

            // Update highest mark if current mark is greater
            if (s[i].Marks[j] > highestMark) {
                highestMark = s[i].Marks[j];
            }
        }
        s[i].Average = total / 5.0;
    }

    printf("\nPrinting the given Student Details:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nDetails of %s\n", s[i].Name);
        printf("Roll no.: %d\n", s[i].Roll);
        printf("Marks in the subjects:\n");
        printf("Maths: %d\n", s[i].Marks[0]);
        printf("Physics: %d\n", s[i].Marks[1]);
        printf("Chemistry: %d\n", s[i].Marks[2]);
        printf("Programming: %d\n", s[i].Marks[3]);
        printf("English: %d\n", s[i].Marks[4]); 
        printf("Average Marks: %.2f\n", s[i].Average);
    }

    printf("\nHighest Marks Amongst All Students and Subjects: %d\n", highestMark);

    return 0;                                
}                                                                                                                                                
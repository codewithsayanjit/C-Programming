//  Grade calculation:  
/* If the score is less than 40 then fail. 
If the score is between 41 to 50, then Grade E. 
If the score is between 51 to 60, then Grade D. 
If the score is between 61 to 70, then Grade C. 
If the score is between 71 to 80, then Grade B. 
If the score is between 81 to 90, then Grade A. 
If the score is between 91 to 100, then Grade O. */

#include <stdio.h>
int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);
    if (score <= 40) {
        printf("Result: Fail\n");
    } 
    else if (score >= 41 && score <= 50) {
        printf("Grade: E\n");
    } 
    else if (score >= 51 && score <= 60) {
        printf("Grade: D\n");
    } 
    else if (score >= 61 && score <= 70) {
        printf("Grade: C\n");
    } 
    else if (score >= 71 && score <= 80) {
        printf("Grade: B\n");
    } 
    else if (score >= 81 && score <= 90) {
        printf("Grade: A\n");
    } 
    else
        printf("Grade: O\n");
    return 0;
}

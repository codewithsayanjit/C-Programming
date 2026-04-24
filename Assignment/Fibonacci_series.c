// WAP to find out the Fibonacci series up to n terms.

#include <stdio.h>
int main() {
  int i, n;
  int num1 = 0, num2 = 1; // first two terms
  int nextTerm = num1 + num2; // 1st term = 0, 2nd term = 1, 3rd term = 1
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", num1, num2); // Prints the first two terms (0,1)
  for (i = 3; i <= n; i++) { // loop starts from 3rd term
    nextTerm = num1 + num2; // calculating next term
    printf("%d , ", nextTerm);
    num1 = num2;  // num1 becomes the old num2 (Shifting)
    num2 = nextTerm; // num2 becomes the newly calculated nextTerm (Updating)
  }
  return 0;
}

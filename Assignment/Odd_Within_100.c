// WAP to print all odd number within 100.

#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 100) {
        if (i % 2 != 0) {
            printf("  %d  ", i);
        }
        i++; // i = i + 1
    }
    return 0;
}

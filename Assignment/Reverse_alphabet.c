// Print alphabets from ‘z’ to ‘a’ (in reverse order).

#include <stdio.h>
int main() {
    char ch;
    for (ch = 'z'; ch >= 'a'; ch--) { // ch-- equals ch = ch - 1 ; -- is called the decrement operator
        printf("%c ", ch);
    }

    return 0;
}
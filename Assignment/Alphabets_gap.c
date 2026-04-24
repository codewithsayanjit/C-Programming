//     Print alphabets from ‘b’ to ‘t’ with a gap of 2 alphabets.   

#include <stdio.h>
int main() {
    char ch;
    for (ch = 'b'; ch <= 't'; ch += 3) { // ch += 3 equals ch = ch + 3 ; += is called the addition assignment operator
        printf("%c ", ch);
    }

    return 0;
}
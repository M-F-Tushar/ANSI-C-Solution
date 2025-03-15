// Programming Exercise 5.1
// Read "WORDPROCESSING" from terminal and display it in different formats

#include <stdio.h>

int main() {
    char str[] = "WORDPROCESSING";

    // (a) Print as "WORD PROCESSING"
    printf("%c%c%c%c PROCESSING\n", str[0], str[1], str[2], str[3]);

    // (b) Print as "WORD\nPROCESSING"
    printf("WORD\nPROCESSING\n");

    // (c) Print as "W.P."
    printf("%c.%c.\n", str[0], str[4]);

    return 0;
}


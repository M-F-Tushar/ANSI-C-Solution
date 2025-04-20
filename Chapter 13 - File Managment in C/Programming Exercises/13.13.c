
13.13 Write a C program that reads characters from a file and prints
their ASCII codes.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("Character: %c, ASCII Code: %d\n", ch, ch);
    }

    fclose(fp);
    return 0;
}

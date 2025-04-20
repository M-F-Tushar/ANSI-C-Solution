13.4 Write a program that appends one file at the end of another.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("append.txt", "r");
    dest = fopen("main.txt", "a");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("File appended successfully.\n");

    return 0;
}

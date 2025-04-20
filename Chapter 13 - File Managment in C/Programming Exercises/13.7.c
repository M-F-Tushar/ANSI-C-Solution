13.7 Write a program that requests for a file name and an inte­ger,
known as offset value. The program then reads the file starting
from the location specified by the offset value and prints the
contents on the screen.
Note: If the offset value is a positive integer, then printing skips
that many lines. If it is a negative number, it prints that many
lines from the end of the file. An appropriate error message
should be printed, if anything goes wrong.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LEN 200

int main() {
    char filename[100];
    int offset, i, line_count = 0;
    char lines[MAX_LINES][MAX_LEN];
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", filename);
    printf("Enter offset value: ");
    scanf("%d", &offset);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    // Read lines into array
    while (fgets(lines[line_count], MAX_LEN, fp) != NULL && line_count < MAX_LINES) {
        line_count++;
    }

    fclose(fp);

    if (offset >= 0 && offset < line_count) {
        for (i = offset; i < line_count; i++)
            printf("%s", lines[i]);
    } else if (offset < 0 && -offset <= line_count) {
        for (i = line_count + offset; i < line_count; i++)
            printf("%s", lines[i]);
    } else {
        printf("Invalid offset.\n");
    }

    return 0;
}


13.3 Write a program that compares two files and returns 0 if they are
equal and 1 is they are not.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    char ch1, ch2;

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    do {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);

        if (ch1 != ch2) {
            printf("Files are not equal.\n");
            fclose(f1);
            fclose(f2);
            return 1;
        }
    } while (ch1 != EOF && ch2 != EOF);

    if (ch1 == EOF && ch2 == EOF) {
        printf("Files are equal.\n");
        fclose(f1);
        fclose(f2);
        return 0;
    }

    printf("Files are not equal.\n");
    fclose(f1);
    fclose(f2);
    return 1;
}

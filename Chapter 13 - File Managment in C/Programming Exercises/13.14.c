
13.14 Write a C program that concatenates the contents of two files and
writes then in the third file.

#include <stdio.h>

int main() {
    FILE *src1, *src2, *dest;
    char ch;

    src1 = fopen("file1.txt", "r");
    src2 = fopen("file2.txt", "r");
    dest = fopen("combined.txt", "w");

    if (src1 == NULL || src2 == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Copy contents of file1.txt to combined.txt
    while ((ch = fgetc(src1)) != EOF)
        fputc(ch, dest);

    // Copy contents of file2.txt to combined.txt
    while ((ch = fgetc(src2)) != EOF)
        fputc(ch, dest);

    fclose(src1);
    fclose(src2);
    fclose(dest);

    printf("Files concatenated successfully.\n");

    return 0;
}

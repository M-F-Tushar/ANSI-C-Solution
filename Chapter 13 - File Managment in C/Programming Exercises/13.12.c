
13.12 Write a C program that uses getw function to read integer values
from one file. Subsequently, it uses the putw function to write the
integer values in reverse order in another file.

#include <stdio.h>

int main() {
    FILE *src, *dest;
    int num;
    int values[100], count = 0;

    src = fopen("source.dat", "r");
    dest = fopen("reverse.dat", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read integers from source file
    while ((num = getw(src)) != EOF) {
        values[count++] = num;
    }

    // Write integers to destination file in reverse order
    for (int i = count - 1; i >= 0; i--) {
        putw(values[i], dest);
    }

    fclose(src);
    fclose(dest);
    printf("Integers reversed and written to file.\n");

    return 0;
}

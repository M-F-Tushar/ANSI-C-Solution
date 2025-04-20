
13.15 Write a C program that uses fscanf function to read integer values
from a file, computes the square of each integer value and places
the resultant values in a different file.

#include <stdio.h>

int main() {
    FILE *src, *dest;
    int num, square;

    src = fopen("input.dat", "r");
    dest = fopen("output.dat", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read integers, compute their square, and write to output file
    while (fscanf(src, "%d", &num) == 1) {
        square = num * num;
        fprintf(dest, "%d\n", square);
    }

    fclose(src);
    fclose(dest);

    printf("Squares written to output file.\n");

    return 0;
}

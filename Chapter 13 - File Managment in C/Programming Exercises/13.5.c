
13.5 Write a program that reads a file containing integers
and appends at its end the sum of all the integers.


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r+");  // open for reading and writing
    int num, sum = 0;

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }

    fprintf(fp, "\nSum = %d", sum);

    fclose(fp);
    printf("Sum appended to file successfully.\n");

    return 0;
}

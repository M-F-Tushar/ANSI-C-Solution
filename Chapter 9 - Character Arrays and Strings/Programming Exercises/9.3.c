9.3 Write a program to extract a portion of a character string and print the extracted string.
Solution:

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, length;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter start position and length: ");
    scanf("%d %d", &start, &length);

    printf("Extracted substring: ");
    for (int i = start; i < start + length && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
Explanation:
Reads a string and extracts a substring from a specified position and length.



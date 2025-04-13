9.16 - Compare Two Strings Without String Functions
Problem:
Write a program to compare two strings without using string functions.

Solution in C:

#include <stdio.h>

int compareStrings(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int result = compareStrings(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}

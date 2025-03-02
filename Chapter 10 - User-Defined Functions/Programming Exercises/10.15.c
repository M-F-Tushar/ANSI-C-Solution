/*
Develop your own functions for performing following operations
on strings:
(a)Copying one string to another
(b)Comparing two strings
(c)Adding a string to the end of another string
Write a driver program to test your functions.
*/
#include <stdio.h>
#include <string.h>

// Function to copy one string to another
void copyString(char dest[], char src[]) {
    strcpy(dest, src);
}

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // Copy
    copyString(str3, str1);
    printf("Copied String: %s\n", str3);

    // Compare
    int cmp = compareStrings(str1, str2);
    printf("Comparison Result: %d\n", cmp);

    // Concatenate
    concatenateStrings(str1, str2);
    printf("Concatenated String: %s\n", str1);

    return 0;
}

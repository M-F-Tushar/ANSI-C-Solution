/*
Write a function that will scan a character string passed as an
argument and convert all lowercase characters into their
uppercase equivalents.
*/
#include <stdio.h>
#include <ctype.h>

// Function to convert lowercase letters to uppercase
void convertToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[] = "hello world!";
    convertToUppercase(str);
    printf("Uppercase String: %s\n", str);
    return 0;
}

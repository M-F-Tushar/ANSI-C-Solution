
9.20 - Concatenate Two Strings Without Using String Functions
Solution in C:

#include <stdio.h>

void concatenate(char *str1, char *str2) {
    while (*str1) str1++;
    while (*str2) *str1++ = *str2++;
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    concatenate(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}

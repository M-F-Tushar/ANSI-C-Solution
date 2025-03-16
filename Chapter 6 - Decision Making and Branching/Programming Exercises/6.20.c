Programming Problem 6.20
Problem:
Input a string and count the number of capital and small alphabets in the string.

Solution:
c
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int capital = 0, small = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            capital++;
        } else if (islower(str[i])) {
            small++;
        }
    }

    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);

    return 0;
}

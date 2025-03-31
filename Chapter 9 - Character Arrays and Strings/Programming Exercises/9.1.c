9.1 Write a program that reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.
Solution:

#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("ASCII values of your name:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c: %d\n", name[i], name[i]);
    }

    return 0;
}
Explanation:
Takes input as a string.

Loops through each character and prints its ASCII value.



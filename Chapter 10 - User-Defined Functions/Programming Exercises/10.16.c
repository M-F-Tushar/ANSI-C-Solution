
/*
Write a program that invokes a function called find( ) to perform
the following tasks:
(a)Receives a character array and a single character.
(b)Returns 1 if the specified character is found in the array, 0
otherwise.
*/
#include <stdio.h>

// Function to find a character in a string
int find(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            return 1; // Character found
    }
    return 0; // Character not found
}

int main() {
    char str[] = "Hello World";
    char ch = 'W';

    if (find(str, ch))
        printf("Character '%c' found in string.\n", ch);
    else
        printf("Character '%c' not found in string.\n", ch);

    return 0;
}

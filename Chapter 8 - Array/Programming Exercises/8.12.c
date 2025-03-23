8.12 Count Occurrences of a Character in a String
C Program:

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
        if(str[i] == ch)
            count++;

    printf("Character '%c' appears %d times.\n", ch, count);
    return 0;
}

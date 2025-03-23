8.11 Find the Length of a String
C Program:

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length of the string: %d\n", i);
    return 0;
}

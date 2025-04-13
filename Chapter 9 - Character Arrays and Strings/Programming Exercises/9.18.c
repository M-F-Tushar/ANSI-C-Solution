9.18 - Replace Spaces with Double Spaces
Solution in C:

#include <stdio.h>

int main() {
    char str[200], newStr[400];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            newStr[j++] = ' ';
            newStr[j++] = ' ';
        } else {
            newStr[j++] = str[i];
        }
        i++;
    }
    newStr[j] = '\0';

    printf("Modified String: %s\n", newStr);

    return 0;
}

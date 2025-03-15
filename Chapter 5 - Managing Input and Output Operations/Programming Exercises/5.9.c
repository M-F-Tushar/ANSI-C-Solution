// Programming Exercise 5.9
// Read name "ANIL KUMAR GUPTA" and display in different formats

#include <stdio.h>

int main() {
    char first[20], middle[20], last[20];
    printf("Enter full name (First Middle Last): ");
    scanf("%s %s %s", first, middle, last);

    printf("%s %s %s\n", first, middle, last);  // Format (a)
    printf("%c.%c. %s\n", first[0], middle[0], last);  // Format (b)
    printf("%s %c.%c.\n", last, first[0], middle[0]);  // Format (c)

    return 0;
}


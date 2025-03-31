9.11 Compare two strings using strncmp().
Solution:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = strncmp(str1, str2, 3);

    if (result == 0)
        printf("First 3 characters are equal.\n");
    else if (result < 0)
        printf("First string is smaller.\n");
    else
        printf("First string is greater.\n");

    return 0;
}
Explanation:
Uses strncmp() to compare only the first 3 characters.

9.13 Copy characters from one string to another at a specific position.
Solution:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "HelloWorld";
    char str2[100] = "ABCDE";
    int pos = 5;

    strncpy(str1 + pos, str2, strlen(str2));

    printf("Modified string: %s\n", str1);

    return 0;
}
Explanation:
Copies a substring from str2 into str1 at a given position.

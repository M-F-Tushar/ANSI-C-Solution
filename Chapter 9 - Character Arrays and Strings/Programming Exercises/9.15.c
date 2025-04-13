9.15 - Displaying Number Pattern from String
Problem:
Given the string


char str[] = "123456789";
Write a program to display the following pattern:

Copy
Edit
1
232
34543
4567654
567898765
Solution in C:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123456789";
    int len = strlen(str);

    for (int i = 0; i < len / 2 + 1; i++) {
        // Print increasing part
        for (int j = i; j < len / 2 + i + 1; j++) {
            printf("%c", str[j]);
        }
        // Print decreasing part
        for (int j = len / 2 + i - 1; j >= i; j--) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

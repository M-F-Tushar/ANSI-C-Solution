9.5 Write a program which will read a string and rewrite it in alphabetical order.
Solution:

#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    sortString(str);

    printf("Sorted string: %s\n", str);

    return 0;
}
Explanation:
Uses bubble sort to arrange characters alphabetically.



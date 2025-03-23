8.14 Validate ISBN Number
C Program:

#include <stdio.h>

int main() {
    char isbn[10];
    int sum = 0, i;

    printf("Enter 9-digit ISBN number: ");
    scanf("%s", isbn);

    for(i = 0; i < 9; i++)
        sum += (isbn[i] - '0') * (i + 1);

    printf("Valid ISBN check digit: %d\n", sum % 11);
    return 0;
}

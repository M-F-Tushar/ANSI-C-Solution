/*
Write a program to read two integer values m and n and to decide
and print whether m is a multiple of n.
*/
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter two integers (m and n): ");
    scanf("%d %d", &m, &n);

    if (n == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (m % n == 0) {
        printf("%d is a multiple of %d\n", m, n);
    } else {
        printf("%d is NOT a multiple of %d\n", m, n);
    }

    return 0;
}

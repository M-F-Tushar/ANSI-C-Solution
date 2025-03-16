
Exercise 6.13: Generate Multiplication Table
Problem:
Write a program to display the multiplication table of a given number up to 10.

Solution:
c
#include <stdio.h>
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

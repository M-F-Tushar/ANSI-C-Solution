/*

Write a program to read three values using scanf statement and
print the following results:
(a) Sum of the values
(b) Average of the three values
(c) Largest of the three
(d) Smallest of the three
*/
#include <stdio.h>

int main() {
    int a, b, c, sum, largest, smallest;
    float average;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0;

    // Largest value using ternary operators
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Smallest value using ternary operators
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}

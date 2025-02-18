/*Given three values, write a program to read three values from
keyboard and print out the largest of them without using if
statement.
*/
#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest number: %d\n", largest);

    return 0;
}

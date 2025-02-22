/*
Write a C program to input the sides of a triangle and determine
whether the triangle is isoceles or not.

*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || b == c || a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is NOT isosceles.\n");
    }

    return 0;
}

/*
Explanation:
An isosceles triangle has at least two equal sides.
*/

/*
Write a C program to compute the value of the
expression x=a-b/3+c*2-1.

*/
#include <stdio.h>

int main() {
    int a, b, c, x;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    x = a - b / 3 + c * 2 - 1;  // Operator precedence is followed
    printf("Result: x = %d\n", x);

    return 0;
}

/*
Explanation:
We compute the value of x based on operator precedence.
*/

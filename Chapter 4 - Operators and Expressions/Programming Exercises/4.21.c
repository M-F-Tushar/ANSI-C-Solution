/*
Write a C program that reads two numbers and performs their
division. If the division is not possible, then an error messgage,
‘Division not possible’ is displayed.

*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division not possible.\n");
    } else {
        printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
    }

    return 0;
}

/*
Explanation:
If the denominator is zero, an error message is displayed.
*/

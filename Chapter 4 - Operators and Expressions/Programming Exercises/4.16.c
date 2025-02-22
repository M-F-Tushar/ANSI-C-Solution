/*
Write a program to illustrate the use of cast operator in a real life
situation.

*/
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;

    result = (float)a / b;  // Type casting integer to float
    printf("Without casting: %d / %d = %d\n", a, b, a / b);
    printf("With casting: %d / %d = %.2f\n", a, b, result);

    return 0;
}

/*
Explanation:
The cast operator is used to convert one data type to another.
Example: Converting an integer to a float during division.
*/

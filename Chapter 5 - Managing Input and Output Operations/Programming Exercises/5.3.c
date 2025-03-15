// Programming Exercise 5.3
// Read floating-point numbers, round them, and print as integers

#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    printf("Enter three floating point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("Rounded values: %d %d %d\n", (int)round(num1), (int)round(num2), (int)round(num3));

    return 0;
}


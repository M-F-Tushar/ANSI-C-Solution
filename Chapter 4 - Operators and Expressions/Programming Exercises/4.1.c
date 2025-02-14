//Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.
#include <stdio.h>

int main() {
    float num;
    int integralPart, lastDigit;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Get the integral part of the number
    integralPart = (int)num;

    // Extract the last digit
    lastDigit = integralPart % 10;

    // Display the result
    printf("The right-most digit of the integral part is: %d\n", lastDigit);

    return 0;
}

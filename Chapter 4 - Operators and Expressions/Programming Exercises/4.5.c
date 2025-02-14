//Write a program that will read a real number from the keyboard and print the following output in one line:
//The integer part of the number
//The fractional part of the number

#include <stdio.h>

int main() {
    float num, fractionalPart;
    int integerPart;

    // Input the real number
    printf("Enter a real number: ");
    scanf("%f", &num);

    // Extract integer and fractional parts
    integerPart = (int)num;
    fractionalPart = num - integerPart;

    // Print the result
    printf("Integer Part: %d, Fractional Part: %.2f\n", integerPart, fractionalPart);

    return 0;
}

/*Write a program to read a four digit integer and print
the sum of its digits.
Hint: Use / and % operators.
*/
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    sum += num % 10;  // Extract last digit
    num /= 10;
    sum += num % 10;  // Extract third digit
    num /= 10;
    sum += num % 10;  // Extract second digit
    num /= 10;
    sum += num;       // Remaining first digit

    printf("Sum of digits: %d\n", sum);

    return 0;
}


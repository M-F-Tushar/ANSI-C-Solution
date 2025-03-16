
Exercise 6.12: Check for Prime Numbers
Problem:
Write a program to check whether a given number is prime. A number is prime if it is greater than 1 and divisible only by 1 and itself.

Solution:
c
#include <stdio.h>
int main() {
    int number, i, isPrime = 1;  // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;  // Not a prime number
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

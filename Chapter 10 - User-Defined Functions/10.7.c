/*
Write a function prime that returns 1 if its argument is a prime
number and returns zero otherwise.
*/
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int number = 29; // Example input
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    return 0;
}

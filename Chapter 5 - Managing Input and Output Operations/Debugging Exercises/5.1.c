// Debugging Exercise 5.1
// Given input statements, let's correct errors if any.

#include <stdio.h>

int main() {
    int amount, code, year, count;
    char city[50];
    float price;

    // Corrected Statements
    printf("%-5s. %c\n", city, code); // Assuming city is a string and code is a character
    printf("%f, %d, %s", price, count, city); // %f for float, %d for int, %s for string
    printf("%c%2d%4d\n", amount, code, year); // Assuming amount is a character

    return 0;
}


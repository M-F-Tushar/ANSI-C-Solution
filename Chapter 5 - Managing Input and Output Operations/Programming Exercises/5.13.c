// Programming Exercise 5.13
// Convert Dollars to Euro and INR

#include <stdio.h>

#define USD_TO_EURO 0.85
#define USD_TO_INR 74.5

int main() {
    float dollars;
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    printf("Equivalent in Euro: %.2f\n", dollars * USD_TO_EURO);
    printf("Equivalent in INR: %.2f\n", dollars * USD_TO_INR);

    return 0;
}


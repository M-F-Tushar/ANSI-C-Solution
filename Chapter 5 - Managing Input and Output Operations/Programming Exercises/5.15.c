// Programming Exercise 5.15
// Compute fixed deposit cumulative return

#include <stdio.h>
#include <math.h>

#define RATE 8.75

int main() {
    double principal, amount;
    int years = 10;

    printf("Enter investment amount: ");
    scanf("%lf", &principal);

    amount = principal * pow(1 + (RATE / 100), years);

    printf("Total amount after %d years: %.2lf\n", years, amount);

    return 0;
}


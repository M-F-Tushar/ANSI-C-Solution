// Programming Exercise 5.8
// Print 345.6789 in fixed-point format with varying precision

#include <stdio.h>

int main() {
    double value = 345.6789;

    printf("%.2f\n", value); // Two decimal places
    printf("%.5f\n", value); // Five decimal places
    printf("%.0f\n", value); // Zero decimal places

    return 0;
}


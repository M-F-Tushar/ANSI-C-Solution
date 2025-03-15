
// Programming Exercise 5.7
// Print 10.45678 in exponential format with varying precision

#include <stdio.h>

int main() {
    double value = 10.45678;

    printf("%.2e\n", value); // Two decimal places
    printf("%.4e\n", value); // Four decimal places
    printf("%.8e\n", value); // Eight decimal places

    return 0;
}

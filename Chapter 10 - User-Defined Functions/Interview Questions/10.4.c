/*
Write the code for a recursive function that takes two integers as
input parameters and returns their greatest common divisor
(GCD).


*/
#include <stdio.h>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    printf("GCD of 48 and 18: %d\n", gcd(48, 18));
    return 0;
}

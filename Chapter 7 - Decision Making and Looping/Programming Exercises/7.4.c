7.4 Evaluate Investment Equation
Equation:

V=P(1+r)n

Calculate for various values of P, r, and n.

Solution

#include <stdio.h>
#include <math.h>

int main() {
    double P, r, V;
    int n;

    printf("P\t r\t n\t V\n");
    for (P = 1000; P <= 10000; P += 1000) {
        for (r = 0.10; r <= 0.20; r += 0.01) {
            for (n = 1; n <= 10; n++) {
                V = P * pow(1 + r, n);
                printf("%.0f\t %.2f\t %d\t %.2f\n", P, r, n, V);
            }
        }
    }

    return 0;
}
Explanation
Loop through different values of P, r, and n.
Use pow(1 + r, n) to compute compound interest.
Print values in tabular form.


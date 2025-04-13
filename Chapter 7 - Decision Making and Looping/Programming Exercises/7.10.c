Problem 7.10
Task: Compute Euler's number
𝑒
 using its series expansion:

𝑒=1+11!+12!+
1
3
!
+
…
Stop the computation when the difference between two successive terms is less than
0.00001
.

Approach:

Use a loop to calculate terms of the series.

Stop the loop when the difference between terms is smaller than
0.00001
.

Use a helper function to calculate factorial.


#include <stdio.h>

// Function to calculate factorial
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double e = 1.0, term = 1.0;
    int n = 1;

    // Compute Euler's number
    while (term > 0.00001) {
        term = 1.0 / factorial(n);
        e += term;
        n++;
    }

    printf("The computed value of Euler's number e is approximately: %.5lf\n", e);

    return 0;
}

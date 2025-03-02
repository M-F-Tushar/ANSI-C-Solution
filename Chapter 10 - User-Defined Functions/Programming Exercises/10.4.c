/*
An n_order polynomial can be evaluated as follows:
    P = (.....(((a 0 x+a 1 )x+a 2 )x+a 3 )x+...+a n )

    Write a function to evaluate the polynomial, using an array
variable. Test it using a main program.
*/
#include <stdio.h>

// Function to evaluate polynomial
double evaluatePolynomial(double coeffs[], int n, double x) {
    double result = coeffs[n];
    for (int i = n - 1; i >= 0; i--) {
        result = result * x + coeffs[i];
    }
    return result;
}

int main() {
    double coeffs[] = {1, -2, 3, -4, 5}; // Example coefficients for a 4th-degree polynomial
    int degree = 4;
    double x = 2.0; // Example input
    printf("Polynomial result: %lf\n", evaluatePolynomial(coeffs, degree, x));
    return 0;
}

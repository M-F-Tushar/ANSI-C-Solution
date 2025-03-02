/*Use recursive function calls to evaluate

        f(x)=x−pow(x,3)/3!+pow(x,5)/5!-pow(x,7)/7!+...

*/
#include <stdio.h>

// Function to calculate factorial recursively
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate the series recursively
double series(int n, double x) {
    if (n == 0)
        return x;
    int power = 2 * n + 1; // 1, 3, 5, 7, ...
    double term = (pow(x, power) / factorial(power));
    if (n % 2 == 0)
        return series(n - 1, x) - term;
    else
        return series(n - 1, x) + term;
}

int main() {
    double x = 1.0; // Example input
    int n = 5; // Number of terms
    printf("Series result: %lf\n", series(n, x));
    return 0;
}

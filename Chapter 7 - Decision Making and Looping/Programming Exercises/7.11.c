7.11 Write programs to evaluate the following functions to 0.0001% accuracy
(a) Compute sin(x) using Taylor Series:
The Taylor series expansion of sin(x) is:

sin(𝑥)=𝑥−𝑥3/3!+𝑥5/5!−𝑥7/7!+…

Algorithm:

Take input x in radians.
Initialize term = x and sum = x (first term).
Use a loop to calculate the next terms using
term = - term*x*x/(2n)(2n+1)

until the term's absolute value is less than 0.000001.
Print the result.

#include <stdio.h>
#include <math.h>

#define ACCURACY 0.000001

double compute_sin(double x) {
    double term = x, sum = x;
    int n = 1;

    while (fabs(term) > ACCURACY) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    double x;
    printf("Enter angle in radians: ");
    scanf("%lf", &x);

    printf("sin(%lf) = %lf\n", x, compute_sin(x));
    return 0;
}
(b) Compute cos(x) using Taylor Series:
The Taylor series for cos(x) is:

cos(𝑥)=1−𝑥2/2!+𝑥4/4!−𝑥6/6!+…

#include <stdio.h>
#include <math.h>

double compute_cos(double x) {
    double term = 1, sum = 1;
    int n = 1;

    while (fabs(term) > ACCURACY) {
        term = -term * x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    double x;
    printf("Enter angle in radians: ");
    scanf("%lf", &x);

    printf("cos(%lf) = %lf\n", x, compute_cos(x));
    return 0;
}
(c) Compute the sum of the given series

SUM=1+(1/2)+(1/3) 3+(1/4) 4 +...
Algorithm:

Take n as input for the number of terms.
Use a loop to compute
term=(1/i)power i


#include <stdio.h>
#include <math.h>

double compute_sum(int n) {
    double sum = 1;
    for (int i = 2; i <= n; i++) {
        sum += pow(1.0 / i, i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Sum = %lf\n", compute_sum(n));
    return 0;
}


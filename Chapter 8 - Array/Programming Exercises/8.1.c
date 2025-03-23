8.1 Write a program for fitting a straight line through a set of points (xi, yi), i = 1,...,n.
The equation of a straight line is

y=mx+c

#include <stdio.h>

int main() {
    int n, i;
    float x[100], y[100], sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    float m, c;

    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x and y values:\n");
    for(i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &y[i]);
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    c = (sum_y - m * sum_x) / n;

    printf("The straight-line equation is: y = %.2fx + %.2f\n", m, c);
    return 0;
}


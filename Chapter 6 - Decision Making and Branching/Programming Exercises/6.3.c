Exercise 6.3
Solve a set of two linear equations:

𝑎1𝑥1+b1𝑥2=𝑚
𝑐1𝑥1+d1x2=𝑛

The solutions are:
𝑥1=𝑚𝑑−𝑏𝑛/𝑎𝑑−𝑐𝑏
𝑥2=𝑛𝑎−mc/𝑎d−𝑐𝑏

Solution:

#include <stdio.h>
int main() {
    float a, b, c, d, m, n;
    printf("Enter coefficients a, b, c, d, m, n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    float denominator = a * d - c * b;

    if (denominator == 0) {
        printf("No unique solution exists.\n");
    } else {
        float x1 = (m * d - b * n) / denominator;
        float x2 = (n * a - m * c) / denominator;
        printf("x1: %.2f\nx2: %.2f\n", x1, x2);
    }

    return 0;
}

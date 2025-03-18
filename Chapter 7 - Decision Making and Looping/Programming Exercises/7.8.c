Problem 7.8
Task: Compute values of
𝑦
=
𝑒
−
𝑥
 for
𝑥
 varying from
0.0
 to
10.0
 in steps of
0.1
, and display the results in a tabular format.

Approach:

Use the exp() function from the math library to compute
𝑒
−
𝑥
.

Use a loop to iterate through
𝑥
 values, calculate
𝑦
, and print the results in table format.

Code in C:

c
#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("x\t\ty\n");
    for (x = 0.0; x <= 10.0; x += 0.1) {
        y = exp(-x);
        printf("%.1lf\t\t%.5lf\n", x, y);
    }

    return 0;
}

7.12 Compute Useful Life of an Item using Depreciation Formula
Formula:

𝑃
=
𝐶
(
1
−
𝑑
)
𝑛
P=C(1−d)
n

We need to find n (useful life in years) when P (scrap value) is given.

Algorithm:

Take inputs C, d, and P.
Solve for n using logarithms:
𝑛
=
log
⁡
(
𝑃
/
𝐶
)
log
⁡
(
1
−
𝑑
)
n=
log(1−d)
log(P/C)
​

Print n.


#include <stdio.h>
#include <math.h>

int main() {
    double C, d, P, n;

    printf("Enter original cost (C): ");
    scanf("%lf", &C);

    printf("Enter annual depreciation rate (d): ");
    scanf("%lf", &d);

    printf("Enter scrap value (P): ");
    scanf("%lf", &P);

    n = log(P / C) / log(1 - d);

    printf("The useful life in years: %lf\n", n);
    return 0;
}


Exercise 6.5
Write a program to calculate the factorial of a given number
𝑛
.

Solution:
c
#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}

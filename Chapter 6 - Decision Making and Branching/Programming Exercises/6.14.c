
Exercise 6.14: Factorial Calculation
Problem:
Write a program to calculate the factorial of a given number
𝑛(i.e.,
𝑛!=n×(𝑛−1)×(𝑛−2)…×1).

Solution:
c
#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1;  // Use a larger data type for larger factorials

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}

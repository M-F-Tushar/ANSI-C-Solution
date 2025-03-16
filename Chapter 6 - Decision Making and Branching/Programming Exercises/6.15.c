Exercise 6.15: Fibonacci Sequence
Problem:
Write a program to generate the first
𝑛
 terms of the Fibonacci sequence. The sequence starts with 0 and 1, and each subsequent term is the sum of the previous two terms.

Solution:
c
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: %d, %d", t1, t2);  // Print the first two terms
    for (int i = 3; i <= n; i++) {  // Start from the 3rd term
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}

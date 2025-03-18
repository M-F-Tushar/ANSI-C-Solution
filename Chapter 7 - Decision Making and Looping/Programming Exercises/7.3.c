7.3 Generate Fibonacci Numbers using do...while Loop
Problem: Generate first n Fibonacci numbers.
Example:
Input: 7
Output: 1 1 2 3 5 8 13

Solution
c
Copy
Edit
#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next, count = 2;

    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", first, second);

    do {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        count++;
    } while (count < n);

    printf("\n");
    return 0;
}
Explanation
Start with first = 1, second = 1.
Print first two numbers.
Compute next term as first + second.
Shift values and repeat until n terms are printed.

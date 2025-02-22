/*
Write a C program to shift the given data by two bits to the left.

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Original number: %d\n", num);
    printf("After left shift by 2: %d\n", num << 2);  // Equivalent to num * 4

    return 0;
}

/*
Explanation:
The left shift (<<) operator moves bits to the left by the specified number of positions, effectively multiplying by
2 to the power 𝑛.
*/

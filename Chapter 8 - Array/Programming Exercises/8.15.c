8.15 Matrix Addition and Subtraction
Problem:
Write a C program to read two matrices A and B and print:

A + B

A - B

Solution Steps:
Read two n × n matrices.

Compute sum: C[i][j] = A[i][j] + B[i][j]

Compute difference: D[i][j] = A[i][j] - B[i][j]

Print the result.



#include <stdio.h>

#define SIZE 10

int main() {
    int n, i, j;
    int A[SIZE][SIZE], B[SIZE][SIZE], sum[SIZE][SIZE], diff[SIZE][SIZE];

    printf("Enter size of matrices (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix A:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    // Compute A+B and A-B
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }

    printf("Sum (A + B):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Difference (A - B):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}

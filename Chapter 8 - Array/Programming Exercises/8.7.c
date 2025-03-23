8.7 Matrix Multiplication

Step-by-step solution:
Read the dimensions of the matrices.

Declare matrices A[n][n], B[n][n], and C[n][n].

Read values of A and B.

Multiply matrices using nested loops.

Print the resulting matrix C.

C Program:

#include <stdio.h>

#define SIZE 10

int main() {
    int n, i, j, k;
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE] = {0};

    printf("Enter the size of matrices (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    // Matrix multiplication
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Product Matrix C:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

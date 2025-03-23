
8.20 Sum and Product of Two Matrices

#include <stdio.h>

#define SIZE 10

int main() {
    int n, i, j, k;
    int A[SIZE][SIZE], B[SIZE][SIZE], sum[SIZE][SIZE], product[SIZE][SIZE] = {0};

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

    // Compute Sum
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            sum[i][j] = A[i][j] + B[i][j];

    // Compute Product
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < n; k++)
                product[i][j] += A[i][k] * B[k][j];

    printf("Sum Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Product Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}

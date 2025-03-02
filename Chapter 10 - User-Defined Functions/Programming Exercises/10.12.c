/*
Write a function that can be called to compute the product of two
matrices of size m by n and n by m. The main function provides
the values for m and n and two matrices
*/
#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int m, int n, int p, int mat1[m][n], int mat2[n][p], int result[m][p]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    multiplyMatrices(2, 2, 2, mat1, mat2, result);

    printf("Product of matrices:\n");
    printMatrix(2, 2, result);

    return 0;
}

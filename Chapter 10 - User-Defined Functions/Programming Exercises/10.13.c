/*
Design and code an interactive modular program that will use
functions to a matrix of m by n size, compute column averages
and row averages, and then print the entire matrix with averages
shown in respective rows and columns.
*/
#include <stdio.h>

// Function to calculate row and column averages
void calculateAverages(int rows, int cols, int matrix[rows][cols]) {
    // Row averages
    for (int i = 0; i < rows; i++) {
        double sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Row %d average: %.2lf\n", i + 1, sum / cols);
    }

    // Column averages
    for (int j = 0; j < cols; j++) {
        double sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d average: %.2lf\n", j + 1, sum / rows);
    }
}

int main() {
    int matrix[3][3] = {
        {3, 6, 9},
        {2, 4, 8},
        {1, 5, 7}
    };

    calculateAverages(3, 3, matrix);
    return 0;
}

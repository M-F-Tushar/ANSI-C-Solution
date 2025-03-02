/*
Write a function that can be called to find the largest element of
an m by n matrix.
*/
#include <stdio.h>

// Function to find the largest element in a matrix
int findLargest(int rows, int cols, int matrix[rows][cols]) {
    int max = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
    }
    return max;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Largest element: %d\n", findLargest(3, 3, matrix));
    return 0;
}

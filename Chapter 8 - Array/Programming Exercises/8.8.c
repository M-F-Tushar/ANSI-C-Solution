8.8 Generate a 5×5 Matrix with Specific Pattern
Pattern to create:
Upper left triangle = 1

Lower right triangle = -1

Right-to-left diagonal = 0

Step-by-step solution:
Create a 5×5 matrix.

Iterate through each element (i, j):

If j <= i, set matrix[i][j] = 1

If j > i, set matrix[i][j] = -1

If i + j == 4, set matrix[i][j] = 0

Print the matrix.

C Program:

#include <stdio.h>

#define SIZE 5

int main() {
    int matrix[SIZE][SIZE], i, j;

    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            if (i + j == SIZE - 1)
                matrix[i][j] = 0;
            else if (j <= i)
                matrix[i][j] = 1;
            else
                matrix[i][j] = -1;
        }
    }

    printf("Generated Matrix:\n");
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}


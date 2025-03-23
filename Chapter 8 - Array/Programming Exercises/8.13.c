8.13 Transpose of a Matrix
C Program:

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS], transpose[COLS][ROWS], i, j;

    printf("Enter matrix elements:\n");
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transposed Matrix:\n");
    for(i = 0; i < COLS; i++) {
        for(j = 0; j < ROWS; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}

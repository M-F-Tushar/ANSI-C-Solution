8.4 Pascal’s Triangle
Step-by-step solution:
Use a 2D array pascal[10][10].

Initialize pascal[i][0] = pascal[i][i] = 1 for all i.

Compute P[i][j] = P[i-1][j-1] + P[i-1][j] for non-boundary elements.

Print the triangle.

C Program:

#include <stdio.h>

#define N 10

int main() {
    int pascal[N][N] = {0}, i, j;

    for(i = 0; i < N; i++) {
        pascal[i][0] = pascal[i][i] = 1;
        for(j = 1; j < i; j++)
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
    }

    printf("Pascal's Triangle:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j <= i; j++)
            printf("%d ", pascal[i][j]);
        printf("\n");
    }
    return 0;
}

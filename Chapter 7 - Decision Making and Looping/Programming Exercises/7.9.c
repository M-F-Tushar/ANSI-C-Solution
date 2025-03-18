Problem 7.9
Task: Display the letter "S" in a grid of 15 rows and 18 columns using nested loops.

Approach:

Use nested for loops to print * or spaces depending on the row and column number.

Implement logic for top, middle, and bottom sections of the "S".

Code in C:

c
#include <stdio.h>

int main() {
    int rows = 15, cols = 18;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            // Top curve of 'S'
            if ((r < 3 && c < cols - 1) ||
                (r == 3 && c == 0) ||
                (r == 4 && c < cols - 1)) {
                printf("*");
            }
            // Middle bar of 'S'
            else if (r == rows / 2 && c < cols) {
                printf("*");
            }
            // Bottom curve of 'S'
            else if ((r > rows - 4 && c < cols - 1) ||
                     (r == rows - 4 && c == cols - 1) ||
                     (r == rows - 5 && c > 0)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

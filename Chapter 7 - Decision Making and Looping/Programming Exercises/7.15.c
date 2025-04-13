
7.15 Modify the square pattern with 'O' at the center
Pattern:

S S S S S
S S S S S
S S O S S
S S S S S
S S S S S
Algorithm:

Use two nested loops.
If i == size/2 && j == size/2, print 'O', else print 'S'.
C Program:

#include <stdio.h>

int main() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2 && j == size / 2)
                printf("O ");
            else
                printf("S ");
        }
        printf("\n");
    }
    return 0;
}

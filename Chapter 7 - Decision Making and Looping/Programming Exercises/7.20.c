
7.20 Write a C Program to Display a Binary Pattern
Pattern:

1
0 1
1 0 1
0 1 0 1

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}


7.18 Write a C Program to Display a Pattern
Pattern:

1
A B
2 3 4
C D E F
5 6 7 8 9

#include <stdio.h>

int main() {
    int num = 1;
    char letter = 'A';

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                printf("%d ", num++);
            } else {
                printf("%c ", letter++);
            }
        }
        printf("\n");
    }

    return 0;
}

7.19 Write a C Program to Display a Pyramid Pattern
Pattern:

    1
   1 2 1
  1 2 3 2 1
   1 2 1
    1

#include <stdio.h>

int main() {
    int n = 3;  // Middle row count

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

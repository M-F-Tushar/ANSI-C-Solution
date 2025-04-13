7.13 Print a square of size 5 using character 'S'
Pattern:

S S S S S
S S S S S
S S S S S
S S S S S
S S S S S

#include <stdio.h>

int main() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("S ");
        }
        printf("\n");
    }
    return 0;
}


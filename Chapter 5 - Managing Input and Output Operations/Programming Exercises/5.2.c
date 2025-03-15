// Programming Exercise 5.2
// Read values of x and y and compute expressions

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter values for x and y: ");
    scanf("%d %d", &x, &y);

    // Print expressions in one line
    printf("(x+y): %d, (x-y): %d, (x+y)/2: %d, (x*y)/(x-y): %d\n", x+y, x-y, (x+y)/2, (x*y)/(x-y));

    return 0;
}


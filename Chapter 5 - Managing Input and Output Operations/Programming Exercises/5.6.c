// Programming Exercise 5.6
// Read three integers with one scanf and print using different printf formats

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // (a) Three printf statements
    printf("%d ", a);
    printf("%d ", b);
    printf("%d\n", c);

    // (b) One printf with conversion specifiers
    printf("%d %d %d\n", a, b, c);

    // (c) One printf without conversion specifiers
    printf(a, b, c);

    return 0;
}


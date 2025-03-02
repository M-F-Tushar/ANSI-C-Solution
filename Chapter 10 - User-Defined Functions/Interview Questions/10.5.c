/*
What is a comma operator?
he comma operator (,) evaluates expressions from left to right.
*/
#include <stdio.h>

int main() {
    int a = (1, 2, 3);
    printf("%d\n", a);  // Output: 3
    return 0;
}

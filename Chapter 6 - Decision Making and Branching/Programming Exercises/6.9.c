6.9 Function Evaluation
Problem:
Write a program to evaluate the function:

𝑦={ 1 if 𝑥>0
    0 if 𝑥=0
    -1 if 𝑥<0
Using:

(a) Nested if

(b) else if

(c) Conditional operator ? :

Solution:
c
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    // (a) Using nested if
    if (x > 0) {
        y = 1;
    } else {
        if (x == 0) y = 0;
        else y = -1;
    }
    printf("(a) y = %d\n", y);

    // (b) Using else if
    if (x > 0) y = 1;
    else if (x == 0) y = 0;
    else y = -1;
    printf("(b) y = %d\n", y);

    // (c) Using conditional operator
    y = (x > 0) ? 1 : ((x == 0) ? 0 : -1);
    printf("(c) y = %d\n", y);

    return 0;
}

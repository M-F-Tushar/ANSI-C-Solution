7.5 Print Patterns using for Loops
Pattern (a)

1
22
333
4444
55555
Solution

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
Pattern (b)

* * * * *
* * * *
* * *
* *
*
Solution

#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
Explanation
Nested loops are used to print numbers or *.
The outer loop determines rows.
The inner loop controls the number of characters printed.


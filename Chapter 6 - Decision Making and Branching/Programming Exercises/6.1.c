Exercise 6.1
Write a program to determine whether a given number is "odd" or "even" and print:

NUMBER IS EVEN

NUMBER IS ODD

(a) Without using else:
c
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    }
    if (number % 2 != 0) {
        printf("NUMBER IS ODD\n");
    }
    return 0;
}
(b) With else:
c
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    } else {
        printf("NUMBER IS ODD\n");
    }
    return 0;
}

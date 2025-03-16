Programming Problem 6.17
Problem:
Input two numbers
𝑎 and 𝑏
 and display whether:
𝑎>𝑏
𝑏>𝑎
𝑎=𝑏
Solution:
c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("a is greater than b\n");
    } else if (b > a) {
        printf("b is greater than a\n");
    } else {
        printf("a and b are equal\n");
    }
    return 0;
}

Exercise 6.2
Find the count and sum of all integers greater than 100 and less than 200 that are divisible by 7.

Solution:
c
#include <stdio.h>
int main() {
    int count = 0, sum = 0;

    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            count++;
            sum += i;
        }
    }
    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);

    return 0;
}

/*
Write a program to compute the values of square-roots and
squares of the numbers 0 to 100 in steps 10 and print the output in
a tabular form as shown below.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Number   Square-root   Square\n");
    printf("-------------------------------\n");

    for (num = 0; num <= 100; num += 10) {
        printf("%3d       %.4f       %d\n", num, sqrt(num), num * num);
    }

    return 0;
}
/*
Explanation:
The program computes square root and square values for numbers from 0 to 100 in steps of 10.
We use the sqrt() function from math.h to find square roots.
*/

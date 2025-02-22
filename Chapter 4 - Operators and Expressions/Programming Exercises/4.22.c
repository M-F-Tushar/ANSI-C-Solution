
/*
Input the value of 4 variables a, b, c and d and compute the
resultant value of following expressions:
(a + b) * (c / d)
(a + b) * c / d
a + (b * c) / d
*/
#include <stdio.h>

int main() {
    float a, b, c, d, result1, result2, result3;

    printf("Enter values for a, b, c, and d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    result1 = (a + b) * (c / d);
    result2 = (a + b) * c / d;
    result3 = a + (b * c) / d;

    printf("(a + b) * (c / d) = %.2f\n", result1);
    printf("(a + b) * c / d = %.2f\n", result2);
    printf("a + (b * c) / d = %.2f\n", result3);

    return 0;
}

/*
Explanation:
The program evaluates three mathematical expressions.
*/


/*
Write a function that receives a floating point value x and returns
it as a value rounded to two nearest decimal places. For example,
the value 123.4567 will be rounded to 123.46 (Hint: Seek help of
one of the math functions available in math library).
*/
#include <stdio.h>
#include <math.h>

// Function to round a number to two decimal places
double roundToTwoDecimals(double x) {
    return round(x * 100) / 100;
}

int main() {
    double num = 123.4567;
    printf("Rounded Value: %.2lf\n", roundToTwoDecimals(num));
    return 0;
}

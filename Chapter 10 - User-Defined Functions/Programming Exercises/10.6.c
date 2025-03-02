/*
Write a function that will round a floating-point number to an
indicated decimal place. For example the number 17.457 would
yield the value 17.46 when it is rounded off to two decimal
places.
*/
#include <stdio.h>
#include <math.h>

// Function to round a floating-point number to a given decimal place
double roundToDecimal(double num, int decimalPlaces) {
    double factor = pow(10, decimalPlaces);
    return round(num * factor) / factor;
}

int main() {
    double number = 17.457;
    int decimalPlaces = 2;
    printf("Rounded result: %.2lf\n", roundToDecimal(number, decimalPlaces));
    return 0;
}

//Modify the above program to display the two right most digits of the integral part of the number
#include <stdio.h>

int main() {
    float num;
    int integralPart, lastTwoDigits;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Get the integral part of the number
    integralPart = (int)num;

    // Extract the last two digits
    lastTwoDigits = integralPart % 100;

    // Display the result
    printf("The two right-most digits of the integral part are: %d\n", lastTwoDigits);

    return 0;
}

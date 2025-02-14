/*
The straight-line method of computing the yearly depreciation of
the value of an item is given by

Depreciation= Purchase Price−Salvage Value/Years of Service

Write a program to determine the salvage value of an item when
the purchase price, years of service, and the annual depreciation
are given.
*/
#include <stdio.h>

int main() {
    float purchasePrice, yearsOfService, annualDepreciation, salvageValue;

    // Input values
    printf("Enter Purchase Price: ");
    scanf("%f", &purchasePrice);
    printf("Enter Years of Service: ");
    scanf("%f", &yearsOfService);
    printf("Enter Annual Depreciation: ");
    scanf("%f", &annualDepreciation);

    // Calculate salvage value
    salvageValue = purchasePrice - (annualDepreciation * yearsOfService);

    // Output the result
    printf("The Salvage Value is: %.2f\n", salvageValue);

    return 0;
}

/*
Rearranging the formula to calculate the salvage value:

Salvage Value=Purchase Price−(Depreciation×Years of Service)
*/

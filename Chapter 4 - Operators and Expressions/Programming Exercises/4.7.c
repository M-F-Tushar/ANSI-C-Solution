/*
In inventory management, the Economic Order Quantity (EOQ) for a single item is given by:
        EOQ = sqrt 2DS / H
And the optimal Time Between Orders (TBO) is given by:
    TBO = EOQ / D
    Write a program to compute EOQ and TBO, given demand rate
(items per unit time), setup costs (per order), and the holding cost
(per item per unit time).
*/
#include <stdio.h>
#include <math.h>

int main() {
    float D, S, H, EOQ, TBO;

    // Input values
    printf("Enter Demand Rate (D): ");
    scanf("%f", &D);
    printf("Enter Setup Costs (S): ");
    scanf("%f", &S);
    printf("Enter Holding Cost (H): ");
    scanf("%f", &H);

    // Calculate EOQ
    EOQ = sqrt((2 * D * S) / H);

    // Calculate TBO
    TBO = EOQ / D;

    // Output the results
    printf("Economic Order Quantity (EOQ): %.2f\n", EOQ);
    printf("Optimal Time Between Orders (TBO): %.2f\n", TBO);

    return 0;
}

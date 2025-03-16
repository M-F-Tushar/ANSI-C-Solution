6.8 Seasonal Discounts
Problem:
A cloth showroom offers seasonal discounts based on the purchase amount and item type (Mill Cloth or Handloom Items). The discount percentages are:

Purchase Amount	Mill Cloth Discount	Handloom Items Discount
0 – 100	    0%	        5%
101 – 200	5%	        7.5%
201 – 300	7.5%	    10%
Above 300	10%	        15%
Write a program to compute the net amount to be paid by the customer.

Solution:
c
#include <stdio.h>
int main() {
    float purchase_amount, discount = 0, net_amount;
    char item_type;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase_amount);
    printf("Enter item type (M for Mill Cloth, H for Handloom Items): ");
    scanf(" %c", &item_type);

    if (item_type == 'M') {
        if (purchase_amount > 300) discount = 10;
        else if (purchase_amount > 200) discount = 7.5;
        else if (purchase_amount > 100) discount = 5;
    } else if (item_type == 'H') {
        if (purchase_amount > 300) discount = 15;
        else if (purchase_amount > 200) discount = 10;
        else if (purchase_amount > 100) discount = 7.5;
        else if (purchase_amount > 0) discount = 5;
    }

    net_amount = purchase_amount - (purchase_amount * discount / 100);
    printf("Net amount to be paid: %.2f\n", net_amount);

    return 0;
}

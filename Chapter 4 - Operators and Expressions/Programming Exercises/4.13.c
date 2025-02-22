/*
The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for
each call made over and above 100 calls. Write a program to read
customer codes and calls made and print the bill for each
customer.
*/
#include <stdio.h>

int main() {
    int customerCode, callsMade;
    float bill;

    printf("Enter customer code and calls made: ");
    scanf("%d %d", &customerCode, &callsMade);

    if (callsMade > 100) {
        bill = 250 + (callsMade - 100) * 1.25;
    } else {
        bill = 250;
    }

    printf("Customer Code: %d\n", customerCode);
    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}

Debugging Exercise 11.2
Problem Statement
Find the error in the following program:

typedef struct product {
    char name[10];
    float price;
} PRODUCT products[10];
Identifying and Fixing Errors
Issue: PRODUCT products[10]; is declared within the typedef statement, which is incorrect syntax.

Fix:

typedef struct product {
    char name[10];
    float price;
} PRODUCT;

PRODUCT products[10];  // ✅ Declaring array separately
Final Corrected Code
c
Copy
Edit
#include <stdio.h>

typedef struct product {
    char name[10];
    float price;
} PRODUCT;

int main() {
    PRODUCT products[10]; // ✅ Fixed

    // Example assignment
    products[0].price = 19.99;

    printf("Price of product 0: %.2f\n", products[0].price);
    return 0;
}

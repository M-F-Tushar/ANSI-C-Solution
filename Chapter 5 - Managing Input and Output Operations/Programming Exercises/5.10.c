// Programming Exercise 5.10
// Read and display a table of data

#include <stdio.h>

int main() {
    int item_code, quantity;
    char location[30];
    float price;

    printf("Enter item code, quantity, price, and location: ");
    scanf("%d %d %f %[^"]", &item_code, &quantity, &price, location);

    printf("\n%-10s %-10s %-10s %-20s\n", "Item Code", "Quantity", "Price", "Location");
    printf("%-10d %-10d %-10.2f %-20s\n", item_code, quantity, price, location);

    return 0;
}


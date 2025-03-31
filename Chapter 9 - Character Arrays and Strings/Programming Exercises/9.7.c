9.7 Read a table of sales and output details of a particular vehicle sold during a specified period.
Solution:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

struct Vehicle {
    char type[20];
    char month[6];  // Format: MM/YY
    int price;
};

int main() {
    struct Vehicle sales[] = {
        {"MARUTI 800", "02/01", 210000},
        {"MARUTI K10", "07/01", 260000},
        {"GYPSY", "04/02", 315750},
        {"MARUTI VAN", "08/02", 240000}
    };

    char searchType[20], searchMonth[6];
    int found = 0;

    printf("Enter vehicle type: ");
    scanf("%s", searchType);
    printf("Enter month (MM/YY): ");
    scanf("%s", searchMonth);

    printf("\nMatching Vehicles:\n");
    for (int i = 0; i < 4; i++) {
        if (strcmp(sales[i].type, searchType) == 0 && strcmp(sales[i].month, searchMonth) == 0) {
            printf("Vehicle: %s, Month: %s, Price: %d\n", sales[i].type, sales[i].month, sales[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No records found.\n");
    }

    return 0;
}
Explanation:
Uses an array of structures to store vehicle data.

Searches for a matching vehicle type and month.

Displays the details if a match is found.



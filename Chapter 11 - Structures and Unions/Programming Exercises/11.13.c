Problem 11.13
Define hotel structure (name, address, grade, avg room charge, num of rooms).

Implementation
c
Copy
Edit
#include <stdio.h>
#include <string.h>

struct Hotel {
    char name[50];
    char address[100];
    int grade;
    float avgCharge;
    int numRooms;
};

// Function to display hotels with charge < given value
void displayHotels(struct Hotel hotels[], int n, float maxCharge) {
    printf("Hotels with charges less than %.2f:\n", maxCharge);
    for (int i = 0; i < n; i++) {
        if (hotels[i].avgCharge < maxCharge) {
            printf("%s, %s - %.2f\n", hotels[i].name, hotels[i].address, hotels[i].avgCharge);
        }
    }
}
Displays hotels cheaper than a given price.



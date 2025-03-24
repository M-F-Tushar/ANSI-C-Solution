Problem 11.12
Define census structure (city name, population, literacy rate) and implement sorting.

Implementation
c
Copy
Edit
#include <string.h>

struct Census {
    char city[50];
    long population;
    float literacyRate;
};

// Function to sort by city name
void sortByName(struct Census arr[], int n) {
    struct Census temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].city, arr[j].city) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
Sorts alphabetically by city name.



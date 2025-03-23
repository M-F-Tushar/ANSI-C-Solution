8.2 Find the highest and lowest temperatures from a 2D array (temperature[31][10])
Step-by-step solution:
Declare a 2D array temperature[31][10] to store the temperature readings.

Read the temperature data for 31 days across 10 cities.

Initialize variables to track the highest and lowest temperatures.

Iterate through the array to find the highest and lowest values.

Print the corresponding city and day.

C Program:

#include <stdio.h>

#define DAYS 31
#define CITIES 10

int main() {
    float temperature[DAYS][CITIES];
    int i, j, maxDay = 0, maxCity = 0, minDay = 0, minCity = 0;
    float maxTemp = -1000, minTemp = 1000;

    printf("Enter the temperatures for 31 days and 10 cities:\n");
    for(i = 0; i < DAYS; i++) {
        for(j = 0; j < CITIES; j++) {
            scanf("%f", &temperature[i][j]);
            if(temperature[i][j] > maxTemp) {
                maxTemp = temperature[i][j];
                maxDay = i;
                maxCity = j;
            }
            if(temperature[i][j] < minTemp) {
                minTemp = temperature[i][j];
                minDay = i;
                minCity = j;
            }
        }
    }

    printf("Highest Temperature: %.2f on Day %d in City %d\n", maxTemp, maxDay + 1, maxCity + 1);
    printf("Lowest Temperature: %.2f on Day %d in City %d\n", minTemp, minDay + 1, minCity + 1);
    return 0;
}

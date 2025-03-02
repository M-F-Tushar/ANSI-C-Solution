
/*
In preparing the calendar for a year we need to know whether that
particular year is leap year or not. Design a function leap( ) that
receives the year as a parameter and returns an appro­priate
message.
What modifications are required if we want to use the function in
preparing the actual calendar?
*/
#include <stdio.h>

// Function to check if a year is a leap year
int leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year = 2024;
    if (leap(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);

    return 0;
}

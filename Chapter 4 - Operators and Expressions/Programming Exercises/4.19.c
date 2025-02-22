/*
Write a C program to input a date value and determine whether
the entered day, month, and year values are valid.

*/
#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int day, month, year;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    int maxDays;
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    if (month == 2) {
        maxDays = isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else {
        maxDays = 31;
    }

    if (day < 1 || day > maxDays) {
        printf("Invalid day!\n");
    } else {
        printf("Valid date: %02d-%02d-%04d\n", day, month, year);
    }

    return 0;
}

/*
Explanation:
The program checks if the entered day, month, and year are valid.
It accounts for leap years.
*/

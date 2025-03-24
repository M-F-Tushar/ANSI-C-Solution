Problem 11.5
Design an update function to increment the date by one day. Handle month-end and leap year conditions.

Step 1: Understanding the Problem
We need to increment the day by 1.

If it's the last day of the month, reset to 1 and increment the month.

If it's December 31, reset to January 1 and increment the year.

Handle February 29 in leap years.

Step 2: Modifying the Structure
Use the same Date structure from 11.4.

Step 3: Implementing the Function
updateDate function increases the day and adjusts the month/year if needed.

Step 4: Writing the Code
c
Copy
Edit
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

// Leap year function
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get days in a month
int daysInMonth(int month, int year) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month];
}

// Function to increment the date by one day
void updateDate(struct Date *d) {
    d->day++;

    if (d->day > daysInMonth(d->month, d->year)) {
        d->day = 1;
        d->month++;

        if (d->month > 12) {
            d->month = 1;
            d->year++;
        }
    }
}

// Function to display date
void displayDate(struct Date d) {
    printf("Updated Date: %02d-%02d-%04d\n", d.day, d.month, d.year);
}

int main() {
    struct Date myDate;

    // Input date
    printf("Enter day, month, year: ");
    scanf("%d %d %d", &myDate.day, &myDate.month, &myDate.year);

    // Update date
    updateDate(&myDate);

    // Display updated date
    displayDate(myDate);

    return 0;
}
Step 5: Explanation
isLeapYear function checks leap years.

daysInMonth function returns days in a given month.

updateDate function:

Increments the day.

If it exceeds the max days in that month, resets to 1 and increments month.

If it’s December 31, resets to January 1 and increments the year.

displayDate function prints in dd-mm-yyyy format.

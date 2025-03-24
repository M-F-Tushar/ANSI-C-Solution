
Problem 11.4
Define a structure date containing three integer members: day, month, and year. Develop a modular program to:

Read data into the structure.

Validate the entered date.

Print the date in "Month Day, Year" format.

Step 1: Understanding the Problem
We need a structure to store a date (day, month, year).

A function to input the date.

A function to validate the date (e.g., no 31st April, no February 30, leap year handling).

A function to display the date in the correct format.

Step 2: Define the Structure
We define a Date structure with three integer members.

Step 3: Implementing the Functions
inputDate function to take user input.

isValidDate function to check if the date is valid.

displayDate function to print in "April 29, 2002" format.

Step 4: Writing the Code
c
Copy
Edit
#include <stdio.h>

// Structure definition
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to validate a date
int isValidDate(struct Date d) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year
    if (d.month == 2 && isLeapYear(d.year)) {
        daysInMonth[2] = 29;
    }

    // Check valid month and day range
    if (d.month < 1 || d.month > 12 || d.day < 1 || d.day > daysInMonth[d.month]) {
        return 0; // Invalid date
    }

    return 1; // Valid date
}

// Function to input a date
void inputDate(struct Date *d) {
    printf("Enter day: ");
    scanf("%d", &d->day);

    printf("Enter month: ");
    scanf("%d", &d->month);

    printf("Enter year: ");
    scanf("%d", &d->year);

    // Validate the date
    if (!isValidDate(*d)) {
        printf("Invalid date! Please enter a valid date.\n");
        inputDate(d); // Re-enter date
    }
}

// Function to print the date in "Month Day, Year" format
void displayDate(struct Date d) {
    char *months[] = {"", "January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    printf("Date: %s %d, %d\n", months[d.month], d.day, d.year);
}

int main() {
    struct Date myDate;

    // Input date
    inputDate(&myDate);

    // Display date
    displayDate(myDate);

    return 0;
}
Step 5: Explanation
Define Date structure with day, month, and year.

isLeapYear function determines if a year is a leap year.

isValidDate function checks if the entered date exists.

inputDate function gets user input and ensures validity.

displayDate function prints in "Month Day, Year" format.

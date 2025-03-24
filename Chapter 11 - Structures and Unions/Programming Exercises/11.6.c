
Problem 11.6
Modify the input function to read a date as a long integer (e.g., 19450815 for August 15, 1945) and assign values to day, month, and year.

Step 1: Understanding the Problem
Input will be a long integer (yyyymmdd format).

Extract year, month, and day from the input.

Store values in the Date structure.

Step 2: Implementing the Function
c
Copy
Edit
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

// Function to extract date from long integer
struct Date extractDate(long int dateInt) {
    struct Date d;
    d.year = dateInt / 10000;
    d.month = (dateInt % 10000) / 100;
    d.day = dateInt % 100;
    return d;
}

// Function to display the extracted date
void displayDate(struct Date d) {
    printf("Extracted Date: %02d-%02d-%04d\n", d.day, d.month, d.year);
}

int main() {
    long int dateInt;
    printf("Enter date in YYYYMMDD format: ");
    scanf("%ld", &dateInt);

    struct Date myDate = extractDate(dateInt);
    displayDate(myDate);

    return 0;
}
Step 3: Explanation
Extract year using dateInt / 10000.

Extract month using (dateInt % 10000) / 100.

Extract day using dateInt % 100.

Store values in Date structure and display them.


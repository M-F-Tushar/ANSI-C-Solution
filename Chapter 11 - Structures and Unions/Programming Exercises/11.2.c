
Problem 11.2
Modify the previous program such that a function is used to input values to the members and another function to display the time.

Step 1: Understanding the Problem
We need to create a structure that stores time (hours, minutes, and seconds).

We need to write a function to input values into the structure.

Another function should display the stored time.

Step 2: Defining the Structure
We define a structure called Time that contains three integer members: hours, minutes, and seconds.

Step 3: Implementing the Functions
inputTime function: Takes user input for hours, minutes, and seconds.

displayTime function: Prints the time in hh:mm:ss format.

Step 4: Writing the Code
c
Copy
Edit
#include <stdio.h>

// Structure definition
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to input time values
void inputTime(struct Time *t) {
    printf("Enter hours: ");
    scanf("%d", &t->hours);

    printf("Enter minutes: ");
    scanf("%d", &t->minutes);

    printf("Enter seconds: ");
    scanf("%d", &t->seconds);
}

// Function to display time
void displayTime(struct Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    struct Time myTime;

    // Input time
    inputTime(&myTime);

    // Display time
    displayTime(myTime);

    return 0;
}
Step 5: Explanation
Define a structure Time to hold hours, minutes, and seconds.

inputTime function: Uses pointers to modify the structure directly.

displayTime function: Prints time in a formatted way (%02d ensures two-digit output).

In main: Calls inputTime to take user input and displayTime to print the time.


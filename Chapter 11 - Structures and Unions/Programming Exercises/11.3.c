Problem 11.3
Design a function update that increments time by one second and returns the new time. If seconds reach 60, reset to zero and increment minutes. If minutes reach 60, reset to zero and increment hours. If hours reach 24, reset to zero.

Step 1: Understanding the Problem
We need to update time by one second.

If seconds == 60, reset it to 0 and increase minutes.

If minutes == 60, reset it to 0 and increase hours.

If hours == 24, reset it to 0.

Step 2: Modifying the Structure
We'll use the same Time structure from Problem 11.2.

Step 3: Implementing the Function
updateTime function: Increments time by one second and adjusts minutes/hours accordingly.

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

// Function to increment time by one second
void updateTime(struct Time *t) {
    t->seconds++;  // Increment seconds

    if (t->seconds == 60) {
        t->seconds = 0;
        t->minutes++;

        if (t->minutes == 60) {
            t->minutes = 0;
            t->hours++;

            if (t->hours == 24) {
                t->hours = 0; // Reset hours
            }
        }
    }
}

int main() {
    struct Time myTime;

    // Input time
    inputTime(&myTime);

    // Display time before increment
    printf("Before update: ");
    displayTime(myTime);

    // Update time
    updateTime(&myTime);

    // Display time after increment
    printf("After update: ");
    displayTime(myTime);

    return 0;
}
Step 5: Explanation
Increment seconds and check if they reach 60.

If seconds = 60, reset to 0 and increment minutes.

If minutes = 60, reset to 0 and increment hours.

If hours = 24, reset to 0.



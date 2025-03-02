/*
Write a function that takes an integer parameter m representing
the month number of the year and returns the corresponding
name of the month. For instance, if m = 3, the month is March.
Test your program.
*/
#include <stdio.h>

char* getMonthName(int m) {
    char *months[] = {
        "Invalid", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    return (m >= 1 && m <= 12) ? months[m] : "Invalid";
}

int main() {
    int m = 3;
    printf("Month %d is %s\n", m, getMonthName(m));
    return 0;
}

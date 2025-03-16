Programming Problem 6.16
Problem:
Input the numeric value of a weekday (1 = Monday, 2 = Tuesday, ..., 7 = Sunday) and display the corresponding day name.

Solution:
c
#include <stdio.h>
int main() {
    int day;
    printf("Enter the numeric day of the week (1 to 7): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}

7.6 Count People in Age Group 50-60 using for and continue
Problem: Read ages of 100 people and count those between 50 and 60.

Solution

#include <stdio.h>

int main() {
    int age, count = 0;

    for (int i = 1; i <= 100; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age < 50 || age > 60)
            continue;  // Skip if not in range

        count++;
    }

    printf("Number of people in age group 50-60: %d\n", count);
    return 0;
}
Explanation
Use a loop to read 100 ages.
continue skips counting if age is not in range 50-60.

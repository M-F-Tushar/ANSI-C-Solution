7.16 Compute Sum of Positive Two-Digit Numbers
Problem Statement:
Input 10 two-digit integers (positive and negative).
Compute the sum of only positive values.
Print the sum and count of positive numbers added.
Stop if the sum exceeds 999.

#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter a two-digit number: ");
        scanf("%d", &num);

        if (num > 0 && num >= 10 && num <= 99) {
            sum += num;
            count++;
        }

        if (sum > 999) {
            printf("Sum exceeded 999. Stopping input.\n");
            break;
        }
    }

    printf("Total sum: %d\n", sum);
    printf("Count of positive numbers: %d\n", count);

    return 0;
}


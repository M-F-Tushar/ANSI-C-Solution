8.18 Minimum Indian Currency Denominations
Problem:
Given an amount in INR, find the minimum currency notes required.


#include <stdio.h>

void findDenominations(int amount) {
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i, count;

    printf("Minimum denominations for %d INR:\n", amount);

    for(i = 0; i < 10; i++) {
        count = amount / notes[i];
        if(count > 0) {
            printf("%d x %d INR\n", count, notes[i]);
            amount -= count * notes[i];
        }
    }
}

int main() {
    int amount;
    printf("Enter amount in INR: ");
    scanf("%d", &amount);

    findDenominations(amount);

    return 0;
}


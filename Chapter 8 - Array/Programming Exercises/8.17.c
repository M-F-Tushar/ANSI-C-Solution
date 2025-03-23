8.17 Count and Sum Odd Numbers in an Array
Problem:
Find and sum all odd numbers in an array.


#include <stdio.h>

#define SIZE 100

int main() {
    int n, i, count = 0, sum = 0, arr[SIZE];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
            sum += arr[i];
        }
    }

    printf("Total odd numbers: %d\n", count);
    printf("Sum of odd numbers: %d\n", sum);

    return 0;
}

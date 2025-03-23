8.9 Implement Selection Sort
Step-by-step solution:
Start from the last element and find the largest value.

Swap it with the last element.

Reduce the array size and repeat until sorted.

C Program:

#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, maxIdx, temp;

    for(i = n - 1; i > 0; i--) {
        maxIdx = 0;
        for(j = 1; j <= i; j++)
            if(arr[j] > arr[maxIdx])
                maxIdx = j;

        temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}


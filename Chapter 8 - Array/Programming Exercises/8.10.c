8.10 Implement Binary Search
Step-by-step solution:
Sort the array (use Selection Sort from 8.9).

Use Binary Search:

If the middle element is the target, return.

If the target is smaller, search the left half.

If larger, search the right half.

C Program:

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[100], n, key, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    pos = binarySearch(arr, 0, n - 1, key);

    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found.\n");

    return 0;
}

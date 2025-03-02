/*
Develop a top-down modular program that will perform the
following tasks:
(a) Read two integer arrays with unsorted elements.
(b) Sort them in ascending order
(c) Merge the sorted arrays
(d) Print the sorted list
Use functions for carrying out each of the above tasks. The main
function should have only function calls.
*/
#include <stdio.h>

// Function to sort an array using Bubble Sort
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    while (i < size1)
        merged[k++] = arr1[i++];
    while (j < size2)
        merged[k++] = arr2[j++];
}

int main() {
    int arr1[] = {7, 2, 9, 4, 1};
    int arr2[] = {8, 3, 6, 5, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    // Sorting both arrays
    sortArray(arr1, size1);
    sortArray(arr2, size2);

    // Merging sorted arrays
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Printing merged sorted array
    printf("Merged sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

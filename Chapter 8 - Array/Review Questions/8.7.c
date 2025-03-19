8.7 What is a dynamic array? How is it created? Give a typical example of a dynamic array.
👉 Dynamic Array – A dynamic array is an array whose size can be changed at runtime.

👉 How is it created?

In C, dynamic arrays are created using malloc() or calloc() functions from the stdlib.h library.
👉 Example:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    // Initialize array elements
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);
    return 0;
}

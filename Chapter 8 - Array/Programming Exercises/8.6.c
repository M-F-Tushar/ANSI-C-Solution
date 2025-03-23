8.6: Merging Two Sorted Arrays in Ascending Order
Problem Statement
Given two one-dimensional sorted arrays A and B, write a C program to merge them into a single sorted array C in ascending order.

Step-by-Step Explanation
Understanding Merging of Two Sorted Arrays

You are given two sorted arrays.

You need to combine them into a third array while maintaining the sorted order.

Example

A = {1, 3, 5, 7}
B = {2, 4, 6, 8, 10}
Merged Array C (Sorted):

C = {1, 2, 3, 4, 5, 6, 7, 8, 10}
Algorithm to Merge Two Sorted Arrays

Create an empty array C of size size(A) + size(B).

Use two pointers:

i → for array A

j → for array B

Compare elements:

If A[i] < B[j], insert A[i] into C and move i forward.

Otherwise, insert B[j] into C and move j forward.

If one array is exhausted, copy the remaining elements of the other array to C.

C Program for Merging Two Sorted Arrays

#include <stdio.h>

// Function to merge two sorted arrays into a sorted array
void mergeSortedArrays(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from A and B into C
    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements from A (if any)
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // Copy remaining elements from B (if any)
    while (j < sizeB) {
        C[k++] = B[j++];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {1, 3, 5, 7};  // Sorted array A
    int B[] = {2, 4, 6, 8, 10};  // Sorted array B

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int sizeC = sizeA + sizeB;
    int C[sizeC];  // Merged array

    mergeSortedArrays(A, sizeA, B, sizeB, C);

    printf("Merged Sorted Array: ");
    printArray(C, sizeC);

    return 0;
}
Explanation of the Code
Function mergeSortedArrays()

Takes three arrays (A, B, and result C) along with their sizes.

Uses two pointers (i, j) to traverse A and B.

Adds elements to C in sorted order.

Function printArray()

Prints the elements of an array.

In main()

Defines two sorted arrays A and B.

Calls mergeSortedArrays() to merge them into C.

Prints the merged sorted array.

Time Complexity
O(n + m) → where n is the size of A and m is the size of B.

Since we traverse both arrays only once, the algorithm is efficient.

Example Output

Merged Sorted Array: 1 2 3 4 5 6 7 8 10

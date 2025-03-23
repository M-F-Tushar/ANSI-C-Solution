8.16 Sum of Two 1D Arrays
Problem:
Compute sum of elements of two 1D arrays and store in another array.


#include <stdio.h>

#define SIZE 100

int main() {
    int n, i;
    int A[SIZE], B[SIZE], C[SIZE];

    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    printf("Enter elements of array A:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter elements of array B:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for(i = 0; i < n; i++)
        C[i] = A[i] + B[i];

    printf("Resultant array (A + B):\n");
    for(i = 0; i < n; i++)
        printf("%d ", C[i]);

    return 0;
}

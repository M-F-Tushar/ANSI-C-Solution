✅ 12.1 Read array and print in reverse using pointers

void reverseArray(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
}

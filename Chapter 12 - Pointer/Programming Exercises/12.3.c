✅ 12.3 Insert into sorted array using pointer

void insertSorted(int *arr, int size, int val) {
    int i = size - 1;
    while (i >= 0 && *(arr + i) > val) {
        *(arr + i + 1) = *(arr + i);
        i--;
    }
    *(arr + i + 1) = val;
}

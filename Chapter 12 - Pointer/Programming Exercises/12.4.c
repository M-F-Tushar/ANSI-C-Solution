
✅ 12.4 Add two matrices using pointers

void addMatrices(int *a, int *b, int *res, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        *(res + i) = *(a + i) + *(b + i);
    }
}

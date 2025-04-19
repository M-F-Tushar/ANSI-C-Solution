
✅ 12.7 Sort strings alphabetically using pointers
Use bubble sort and strcmp, strcpy, swap pointers:


void sort(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

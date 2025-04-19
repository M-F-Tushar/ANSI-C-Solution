
✅ 12.8 Binary search using pointers in an array
Task:

Write a function that performs binary search on a sorted array.

Use pointers.

Show how the function returns the index.

Code:

int binarySearch(int *arr, int size, int key) {
    int *low = arr;
    int *high = arr + size - 1;

    while (low <= high) {
        int *mid = low + (high - low) / 2;
        if (*mid == key)
            return mid - arr;  // return index
        else if (*mid < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;  // not found
}

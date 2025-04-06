//Write a function exchange to interchange the values of two variables, say x and y. Illustrate the use of this function, in a
//calling function. Assume that x and y are defined as global variables.
#include <stdio.h>

// Function to swap two variables using pointers
void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Function call
    exchange(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

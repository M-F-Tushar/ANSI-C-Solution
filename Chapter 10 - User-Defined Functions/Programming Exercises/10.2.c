/*
Write a function space(x) that can be used to provide a space of x
positions between two output numbers. Demonstrate its
application
*/
#include <stdio.h>

// Function to print spaces
void space(int x) {
    for (int i = 0; i < x; i++) {
        printf(" ");
    }
}

int main() {
    printf("Hello");
    space(5);  // 5 spaces
    printf("World\n");
    return 0;
}

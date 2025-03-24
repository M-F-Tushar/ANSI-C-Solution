Problem 11.16 - Structure Size Calculation
Write a C program to print the size of a structure data type.

C Code Implementation
c
Copy
Edit
#include <stdio.h>

struct Sample {
    int a;
    float b;
    char c;
};

int main() {
    printf("Size of structure: %lu bytes\n", sizeof(struct Sample));
    return 0;
}

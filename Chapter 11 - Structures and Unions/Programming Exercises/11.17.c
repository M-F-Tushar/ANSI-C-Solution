Problem 11.17 - Comparing Structure and Union Size
Write a C program to print the size of a structure and union with the same members.

C Code Implementation
c
Copy
Edit
#include <stdio.h>

struct SampleStruct {
    int a;
    float b;
    char c;
};

union SampleUnion {
    int a;
    float b;
    char c;
};

int main() {
    printf("Size of Structure: %lu bytes\n", sizeof(struct SampleStruct));
    printf("Size of Union: %lu bytes\n", sizeof(struct SampleUnion));
    return 0;
}
Structures allocate memory for all members.

Unions allocate memory equal to the largest member.



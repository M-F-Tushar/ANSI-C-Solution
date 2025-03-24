
Problem 11.9 & 11.10
Define a structure for vectors and implement operations like addition, scalar multiplication, and modification.

Implementation
c
Copy
Edit
#include <stdio.h>

struct Vector {
    int values[10];
    int size;
};

// Function to create a vector
void createVector(struct Vector *v) {
    printf("Enter size of vector: ");
    scanf("%d", &v->size);
    printf("Enter vector elements: ");
    for (int i = 0; i < v->size; i++) {
        scanf("%d", &v->values[i]);
    }
}

// Function to display a vector
void displayVector(struct Vector v) {
    printf("(");
    for (int i = 0; i < v.size; i++) {
        printf("%d", v.values[i]);
        if (i < v.size - 1) printf(", ");
    }
    printf(")\n");
}

// Function to add two vectors
struct Vector addVectors(struct Vector v1, struct Vector v2) {
    struct Vector result;
    result.size = v1.size;
    for (int i = 0; i < v1.size; i++) {
        result.values[i] = v1.values[i] + v2.values[i];
    }
    return result;
}

int main() {
    struct Vector v1, v2, sum;

    printf("Enter first vector:\n");
    createVector(&v1);

    printf("Enter second vector:\n");
    createVector(&v2);

    sum = addVectors(v1, v2);
    printf("Sum of vectors: ");
    displayVector(sum);

    return 0;
}
Supports vector creation, addition, and displa

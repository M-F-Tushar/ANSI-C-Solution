
13.9 Write a program to read the file created in Exercise
13.8 and compute and print the total value of all the five products.

#include <stdio.h>

struct Product {
    int code;
    float cost;
    int quantity;
};

int main() {
    FILE *fp = fopen("products.dat", "r");
    struct Product p;
    float total = 0;

    if (fp == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    while (fread(&p, sizeof(p), 1, fp) == 1) {
        total += p.cost * p.quantity;
    }

    fclose(fp);
    printf("Total value of all products: %.2f\n", total);

    return 0;
}

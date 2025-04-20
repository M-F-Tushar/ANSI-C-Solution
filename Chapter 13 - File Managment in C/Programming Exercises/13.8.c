13.8 Write a program to create a sequential file that could store details
about five products. Details include product code, cost and
number of items available and are provided through keyboard.


#include <stdio.h>

struct Product {
    int code;
    float cost;
    int quantity;
};

int main() {
    FILE *fp = fopen("products.dat", "w");
    struct Product p;
    int i;

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Enter product code, cost, quantity: ");
        scanf("%d %f %d", &p.code, &p.cost, &p.quantity);
        fwrite(&p, sizeof(p), 1, fp);
    }

    fclose(fp);
    printf("Products saved to file.\n");

    return 0;
}

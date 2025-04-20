
13.10 Rewrite the program developed in Exercise 13.8 to
store the details in a random access file and print the details of
alter­nate products from the file. Modify the program so that it can output the details of a product when its code is specified inter￾
actively

#include <stdio.h>
#include <stdlib.h>

struct Product {
    int code;
    float cost;
    int quantity;
};

int main() {
    FILE *fp;
    struct Product p;
    int i, choice, code;

    // Writing 5 products randomly
    fp = fopen("products_rand.dat", "wb+");

    if (fp == NULL) {
        printf("File error.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Enter product code, cost, quantity: ");
        scanf("%d %f %d", &p.code, &p.cost, &p.quantity);
        fwrite(&p, sizeof(p), 1, fp);
    }

    rewind(fp);
    printf("\nAlternate products:\n");
    for (i = 0; i < 5; i += 2) {
        fseek(fp, i * sizeof(p), SEEK_SET);
        fread(&p, sizeof(p), 1, fp);
        printf("Code: %d, Cost: %.2f, Quantity: %d\n", p.code, p.cost, p.quantity);
    }

    // Interactive product search
    printf("\nEnter product code to search: ");
    scanf("%d", &code);
    rewind(fp);
    int found = 0;

    while (fread(&p, sizeof(p), 1, fp) == 1) {
        if (p.code == code) {
            printf("Found! Cost: %.2f, Quantity: %d\n", p.cost, p.quantity);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Product not found.\n");
    }

    fclose(fp);
    return 0;
}

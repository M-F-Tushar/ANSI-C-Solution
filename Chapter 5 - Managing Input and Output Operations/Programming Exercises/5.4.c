// Programming Exercise 5.4
// Read 4 floating point numbers and display a horizontal bar chart

#include <stdio.h>
#include <math.h>

void print_bar(int value) {
    for (int i = 0; i < value; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    float num1, num2, num3, num4;
    printf("Enter four floating point numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    print_bar((int)round(num1));
    print_bar((int)round(num2));
    print_bar((int)round(num3));
    print_bar((int)round(num4));

    return 0;
}


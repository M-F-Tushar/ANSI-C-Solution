6.10 Quadratic Equation
Problem:
Solve the quadratic equation
𝑎𝑥2+b𝑥+𝑐=0
. Follow these rules:

No solution if
𝑎=0 and 𝑏=0
One root if 𝑎=0
No real roots if the discriminant
𝑏2−4𝑎𝑐 is negative

Two roots otherwise

Solution:
c
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0) {
        printf("No solution.\n");
    } else if (a == 0) {
        root1 = -c / b;
        printf("One root: %.2f\n", root1);
    } else {
        discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            printf("No real roots.\n");
        } else {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots: %.2f and %.2f\n", root1, root2);
        }
    }

    return 0;
}

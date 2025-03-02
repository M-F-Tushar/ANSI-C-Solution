/*
Develop a modular interactive program using functions that reads
the values of three sides of a triangle and displays either its area
or its perimeter as per the request of the user. Given the three
sides a, b and c.
*/
#include <stdio.h>
#include <math.h>

// Function to calculate the perimeter of a triangle
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// Function to calculate the area of a triangle using Heron's formula
double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    int choice;

    // Input three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Menu for user choice
    printf("Choose operation:\n1. Perimeter\n2. Area\n");
    scanf("%d", &choice);

    // Perform calculation based on user choice
    if (choice == 1)
        printf("Perimeter: %.2lf\n", perimeter(a, b, c));
    else if (choice == 2)
        printf("Area: %.2lf\n", area(a, b, c));
    else
        printf("Invalid choice.\n");

    return 0;
}

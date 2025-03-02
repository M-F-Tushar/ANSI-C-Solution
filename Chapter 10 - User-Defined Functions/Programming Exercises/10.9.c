/*
Develop a top_down modular program to implement a calculator.
The program should request the user to input two numbers and
display one of the following as per the desire of the user:
    (a) Sum of the numbers
    (b) Difference of the numbers
    (c) Product of the numbers
    (d) Division of the numbers
Provide separate functions for performing various tasks such as
reading, calculating and displaying. Calculating module should
call second level modules to perform the individual mathematical
operations. The main function should have only function calls.
*/
#include <stdio.h>

// Function for basic arithmetic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : 0; }

int main() {
    double num1, num2;
    int choice;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Menu for user choice
    printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    // Perform operation
    switch (choice) {
        case 1: printf("Result: %.2lf\n", add(num1, num2)); break;
        case 2: printf("Result: %.2lf\n", subtract(num1, num2)); break;
        case 3: printf("Result: %.2lf\n", multiply(num1, num2)); break;
        case 4:
            if (num2 != 0)
                printf("Result: %.2lf\n", divide(num1, num2));
            else
                printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid choice.\n");
    }

    return 0;
}

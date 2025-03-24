
Problem 11.18 - Structure Operations with Pointer Notation
Write a C program for demonstrating structure operations using pointers.

C Code Implementation
c
Copy
Edit
#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

// Function to input employee data
void inputEmployee(struct Employee *e) {
    printf("Enter Name: ");
    scanf(" %[^\n]", e->name);
    printf("Enter Age: ");
    scanf("%d", &e->age);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

// Function to display employee data
void displayEmployee(struct Employee *e) {
    printf("\nEmployee Details:\n");
    printf("Name: %s, Age: %d, Salary: %.2f\n", e->name, e->age, e->salary);
}

int main() {
    struct Employee emp;

    inputEmployee(&emp);
    displayEmployee(&emp);

    return 0;
}
Uses pointer notation (->) for accessing structure members.

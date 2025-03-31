
9.10 Read and store student details and produce sorted lists.
Solution:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

// Sorting functions
void sortByName(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortByRoll(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].roll > students[j].roll) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortByMarks(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].marks < students[j].marks) { // Sort in descending order
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void printStudents(struct Student students[], int n) {
    printf("\nRoll No   Name    Marks\n");
    for (int i = 0; i < n; i++) {
        printf("%d     %s     %d\n", students[i].roll, students[i].name, students[i].marks);
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll number, name, and marks: ");
        scanf("%d %s %d", &students[i].roll, students[i].name, &students[i].marks);
    }

    printf("\nSorted by Name:\n");
    sortByName(students, n);
    printStudents(students, n);

    printf("\nSorted by Roll Number:\n");
    sortByRoll(students, n);
    printStudents(students, n);

    printf("\nSorted by Marks:\n");
    sortByMarks(students, n);
    printStudents(students, n);

    return 0;
}
Explanation:
Uses a struct for student data.

Implements sorting functions for name, roll number, and marks.


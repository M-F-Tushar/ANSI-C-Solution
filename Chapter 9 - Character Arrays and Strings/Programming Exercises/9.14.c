
9.14 Create a directory of students with roll numbers.
(Similar to 9.10, but specifically searches for a student by roll number.)

Solution:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    int n, searchRoll;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll number and name: ");
        scanf("%d %s", &students[i].roll, students[i].name);
    }

    printf("Enter roll number to search: ");
    scanf("%d", &searchRoll);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("Student found: Roll No: %d, Name: %s\n", students[i].roll, students[i].name);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }

    return 0;
}
Explanation:
Stores student details.

Searches for a student by roll number and displays their name.

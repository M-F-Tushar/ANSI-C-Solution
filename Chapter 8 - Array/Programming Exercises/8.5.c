8.5 Student Marks Calculation
Step-by-step solution:
Declare a 2D array marks[100][3] for 100 students.

Read the marks.

Compute total marks for each student.

Find the highest marks in each subject and corresponding roll number.

Find the student with the highest total marks.

C Program:

#include <stdio.h>

#define STUDENTS 100
#define SUBJECTS 3

int main() {
    int marks[STUDENTS][SUBJECTS], total[STUDENTS] = {0}, i, j, highestStudent = 0;
    int highestMarks[SUBJECTS] = {0}, highestRoll[SUBJECTS];

    printf("Enter marks for 100 students in 3 subjects:\n");
    for(i = 0; i < STUDENTS; i++) {
        for(j = 0; j < SUBJECTS; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
            if(marks[i][j] > highestMarks[j]) {
                highestMarks[j] = marks[i][j];
                highestRoll[j] = i + 1;
            }
        }
        if(total[i] > total[highestStudent])
            highestStudent = i;
    }

    printf("Student with highest total marks: Roll No. %d\n", highestStudent + 1);
    for(j = 0; j < SUBJECTS; j++)
        printf("Highest in Subject %d: Roll No. %d (Marks: %d)\n", j + 1, highestRoll[j], highestMarks[j]);

    return 0;
}

Programming Problem 6.18
Problem:
Input the total percentage of marks and display the division:

≥80%: "First Division"

≥60% and <%: "Second Division"

<60%: "Third Division"

Solution:
c
#include <stdio.h>
int main() {
    float percentage;
    printf("Enter the total percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 80) {
        printf("First Division\n");
    } else if (percentage >= 60) {
        printf("Second Division\n");
    } else {
        printf("Third Division\n");
    }
    return 0;
}

Exercise 6.4
Compute and categorize a list of student marks into specific ranges.

Solution:
c
#include <stdio.h>
int main() {
    int marks[100], n, count_more_80 = 0, count_61_80 = 0, count_41_60 = 0, count_0_40 = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the marks (0 to 100):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);

        if (marks[i] > 80) {
            count_more_80++;
        } else if (marks[i] > 60) {
            count_61_80++;
        } else if (marks[i] > 40) {
            count_41_60++;
        } else {
            count_0_40++;
        }
    }

    printf("More than 80: %d\n", count_more_80);
    printf("61 to 80: %d\n", count_61_80);
    printf("41 to 60: %d\n", count_41_60);
    printf("0 to 40: %d\n", count_0_40);

    return 0;
}

Problem 11.7
Create nextdate function that adds n days to the current date and returns the new date.

Step 1: Implementing the Function
c
Copy
Edit
void nextDate(struct Date *d, int n) {
    while (n--) {
        updateDate(d); // Reuse update function from 11.5
    }
}

int main() {
    struct Date myDate;
    int n;

    printf("Enter day, month, year: ");
    scanf("%d %d %d", &myDate.day, &myDate.month, &myDate.year);

    printf("Enter number of days to add: ");
    scanf("%d", &n);

    nextDate(&myDate, n);
    displayDate(myDate);

    return 0;
}
Step 2: Explanation
Uses updateDate (from 11.5) to increment the date n times.

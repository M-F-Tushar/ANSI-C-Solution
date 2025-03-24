Problem 11.8
Compare two dates and return 1 if date1 is earlier, 0 otherwise.

Implementation
c
Copy
Edit
int compareDates(struct Date d1, struct Date d2) {
    if (d1.year < d2.year) return 1;
    if (d1.year > d2.year) return 0;
    if (d1.month < d2.month) return 1;
    if (d1.month > d2.month) return 0;
    return d1.day < d2.day ? 1 : 0;
}
If d1 is earlier, return 1.

Otherwise, return 0.

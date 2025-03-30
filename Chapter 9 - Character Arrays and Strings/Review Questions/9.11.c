9.11 What will be the output of the following segment?

char s1[] = "NEW DELHI";
char s2[] = "BANGALORE";
strncpy(s1, s2, 3);
✅ Answer: BAN DELHI

strncpy(s1, s2, 3) copies the first 3 characters of "BANGALORE" into s1.

Result: "BAN DELHI"

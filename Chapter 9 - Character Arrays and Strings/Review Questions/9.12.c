9.12 What will be the output of the following code?
c
Copy
Edit
char s1[] = "Jaipur";
char s2[] = "Jaipur";
printf("%d", strncmp(s1, s2, 2));
✅ Answer: 0

First 2 characters of "Jaipur" and "Jaipur" are identical → Returns 0.



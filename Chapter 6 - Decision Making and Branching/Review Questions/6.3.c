
6.3 The following is a segment of a program:
c
Copy
Edit
x = 1;
y = -1;
if (x > 0)
    x = x + 1;
y = y + 1;
printf("%d %d", x, y);
Answer: Output will be 2 0.
Explanation:
x = 1, which is greater than 0, so x = x + 1 → x = 2.
y = -1, and y = y + 1 → y = 0.

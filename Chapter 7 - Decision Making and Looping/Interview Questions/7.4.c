.4 What will be the value of x and y after execution?

int x = 10, y = 20;
x = x++ + ++y;
y = ++x + y++;
Step-by-step execution:
x++ (Post-increment: x remains 10 for this operation, then x = 11).
++y (Pre-increment: y = 21).
x = 10 + 21 = 31 (now x = 31).
++x (Pre-increment: x = 32).
y++ (Post-increment: y remains 21, then y = 22).
y = 32 + 21 = 53.
Final values:
x = 32, y = 53.

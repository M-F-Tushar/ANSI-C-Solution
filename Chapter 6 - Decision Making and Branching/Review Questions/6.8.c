6.8 Values of x, y, and z after executing the code segments:
(a)

if (x && y)
    x = 10;
else
    y = 10;
Initial values: x = 5, y = 0, z = 1.
Condition x && y evaluates to 5 && 0, which is false.
Therefore, the else block is executed: y = 10.
Final values: x = 5, y = 10, z = 1.
(b)

if (x || y || z)
    y = 10;
else
    z = 0;
Using the updated values from (a): x = 5, y = 10, z = 1.
Condition x || y || z is 5 || 10 || 1, which is true.
y = 10 is executed (no change).
Final values: x = 5, y = 10, z = 1.
(c)

if (x)
    if (y)
        z = 10;
    else
        z = 0;
Condition if (x) is true (x = 5).
Condition if (y) is true (y = 10).
So, z = 10.
Final values: x = 5, y = 10, z = 10.
(d)

if (x - 0 || x & y)
    if (!y)
        z = 0;
    else
        y = 1;
Condition x - 0 || x & y is 5 || (5 & 10) → 5 || 0, which is true.
Condition !y is !10, which is false.
Therefore, y = 1.
Final values: x = 5, y = 1, z = 10.


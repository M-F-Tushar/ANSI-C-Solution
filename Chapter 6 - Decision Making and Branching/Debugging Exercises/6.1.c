6.1 Find errors in the following segments:
(a)

if (x + y = z && y > 0)
    printf(“ “);
Error: The assignment operator = is used instead of the equality operator ==.
Correction:

if (x + y == z && y > 0)
    printf(" ");
(b)

if (p < 0) || (q < 0)
    printf(" sign is negative");
Error: The || operator should be inside the if condition, not outside.
Correction:

if ((p < 0) || (q < 0))
    printf(" sign is negative");
(c)

if (code > 1);
    a = b + c
else
    a = 0
Error: The semicolon ; after if (code > 1) ends the if condition.
Correction:

if (code > 1)
    a = b + c;
else
    a = 0;

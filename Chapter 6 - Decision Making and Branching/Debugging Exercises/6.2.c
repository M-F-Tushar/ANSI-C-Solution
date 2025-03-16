.2 Find errors in the following statements:
(a)

if (x >= 10) then
    printf("\n");
Error: The then keyword is not used in C language.
Correction:

if (x >= 10)
    printf("\n");
(b)

if x >= 10
    printf("OK");
Error: The condition must be enclosed in parentheses ().
Correction:

if (x >= 10)
    printf("OK");
(c)

if (x = 10)
    printf("Good");
Error: The assignment operator = is used instead of the equality operator ==.
Correction:

if (x == 10)
    printf("Good");
(d)

if (x =< 10)
    printf("Welcome");
Error: The =< operator is invalid in C. The correct operator is <=.
Correction:

if (x <= 10)
    printf("Welcome");

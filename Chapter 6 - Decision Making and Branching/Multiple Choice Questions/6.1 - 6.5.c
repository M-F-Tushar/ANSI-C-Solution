6.1 Nesting is allowed for which of the following statements?
Answer: (d) All of the above
Explanation: In C programming, nesting is allowed in if, if-else, and switch statements. This means you can place one if, if-else, or switch inside another.
6.2 What will be the output of the following if-else statement?

if(x=5)
    printf("Condition is true\n");
else
    printf("Condition is false\n");
Answer: (a) String 'Condition is true' is printed.
Explanation: The condition x=5 is an assignment operation, not a comparison. It assigns 5 to x, which evaluates to true (any non-zero value is treated as true in C). Hence, the if block executes, printing "Condition is true."
6.3 For the following if-else construct:

if(a>=5 && a<=10)
    printf("True");
else
    printf("False");
Answer: (b) True if 5<=a<=10, false otherwise.
Explanation: The condition a >= 5 && a <= 10 checks whether a is between 5 and 10 (inclusive). If true, "True" is printed; otherwise, "False" is printed.
6.4 For the following if-else construct:

if(x%3==0 && x%7==0)
    printf("True");
else
    printf("False");
Answer: (a) True if the given positive integer x is a multiple of 3 and 7; false otherwise.
Explanation: The condition x % 3 == 0 && x % 7 == 0 checks whether x is divisible by both 3 and 7, which means x is a multiple of 21. If true, "True" is printed; otherwise, "False."
6.5 What will be the output of the following program?

main()
{
    x = 5;
    if(x == 5)
        printf("Hello World");
    else
        printf("I am in else block");
}
Answer: (a) String 'Hello World' is printed.
Explanation: The condition x == 5 is true, so the if block executes, printing "Hello World." The else block is ignored.

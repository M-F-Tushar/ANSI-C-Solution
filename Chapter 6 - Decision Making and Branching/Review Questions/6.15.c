Problem 6.15
Code:
c
int x = 0;
if (x >= 0)
    if (x > 0)
        printf("Number is positive");
    else
        printf("Number is negative");
Step-by-Step Execution:
Initialize
𝑥=0.

First condition:
x>=0 is true, so proceed to the inner if block.

Inner condition: 𝑥>0
 is false, so the else block executes.

Print: "Number is negative".

Output:
Number is negative

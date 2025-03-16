Problem 6.17
Code:
c
int x = 10, y = 20;
if ((x < y) || (x + 5) > 10)
    printf("%d", x);
else
    printf("%d", y);
Step-by-Step Execution:
𝑥=10, 𝑦=20.

Evaluate the condition:
(𝑥<𝑦)||(𝑥+5)>10.
𝑥<𝑦: 10<20 is true.

Since the first condition is true, the overall condition evaluates as true (logical OR).

The if block executes, so
𝑥=10 is printed.

Output:
10

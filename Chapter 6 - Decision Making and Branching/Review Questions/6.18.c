
Problem 6.18
Code:
c
int a = 10, b = 5;
if (a > b) {
    if (b > 5)
        printf("%d", b);
} else
    printf("%d", a);
Step-by-Step Execution:
𝑎=10, 𝑏=5.
First condition:
𝑎>𝑏: 10>5 is true. Enter the first if block.

Nested condition:
𝑏>5: 5>5 is false, so nothing is printed inside the first if block.

Output:
No output.

Problem 6.10
Code:
main() {
    int m = 5;
    if (m < 3)
        printf("%d", m + 1);
    else if (m < 5)
        printf("%d", m + 2);
    else if (m < 7)
        printf("%d", m + 3);
    else
        printf("%d", m + 4);
}
Step-by-Step Execution:
𝑚=5. Check conditions:
𝑚<3: False.
𝑚<5: False.
𝑚<7: True.
Execute 𝑝𝑟𝑖𝑛𝑡𝑓(":
Output: 5+3=8.

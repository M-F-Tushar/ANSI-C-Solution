✅ 12.9 What is printed by the following program?

int n = 100;
int *p1 = &n;
int **p2 = &p1;
printf("%d", **p2);
Answer: 100
Explanation: *p2 gives p1, **p2 gives value at p1, which is n.

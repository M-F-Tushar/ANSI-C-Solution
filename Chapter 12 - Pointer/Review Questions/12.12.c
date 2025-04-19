✅ 12.12 Output of:

int m[2];
int *p = m;
m[0] = 100;
m[1] = 200;
printf("%d %d", *p, *(p + 1));
Output: 100 200
Explanation: *p accesses m[0], and *(p + 1) accesses m[1].

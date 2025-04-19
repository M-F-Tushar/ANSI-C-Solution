✅ 12.11 Output of:

int m[2];
*(m + 1) = 100;
*m = *(m + 1);
printf("%d", m[0]);
Explanation:

*(m + 1) = 100 → m[1] = 100

*m = *(m + 1) → m[0] = m[1] = 100

Output: 100



✅ 12.1 Errors in pointer declarations and assignments
Assume:

c
Copy code
int m, n;
int *p1, *p2;
(a) p1 = &m; ✅ Correct
(b) p2 = n; ❌ Error: n is int, not address. Should be p2 = &n;
(c) *p1 = &n; ❌ Error: *p1 is int, can't assign address. Should be p1 = &n;
(d) p2 = &* &m; ✅ Valid but unnecessarily complex. Equivalent to p2 = &m;
(e) m = p2 - p1; ✅ Correct: subtracting two pointers gives difference in number of elements.
(f) p1 = &p2; ❌ Error: p2 is int*, so &p2 is int**. Types mismatch.
(g) m = *p1 + *p2++; ❌ Risky: p2++ modifies pointer, could lead to incorrect access.

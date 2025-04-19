
✅ 12.6 Evaluate Expressions Given:
c
Copy code
int x = 10, y = 10;
int *p1 = &x, *p2 = &y;
(a) (*p1)++

Increments value at p1. So x becomes 11.

(b) --(*p2)

Decrements value at p2. So y becomes 9.

(c) *p1 + (*p2)--

*p1 = 11, *p2 = 9 (before decrement), so result = 11 + 9 = 20, and then y becomes 8.

(d) ++(*p2) - *p1

*p2 = 8, gets incremented to 9, *p1 = 11, so 9 - 11 = -2

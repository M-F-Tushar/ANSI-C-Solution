
✅ 12.3 What is wrong with the code?

int *p1, *p2;
p2 = !p1;
Error:

!p1 is a logical NOT operation. It returns 0 or 1, not a pointer.

Invalid assignment. Should be a pointer assignment: e.g., p2 = p1;

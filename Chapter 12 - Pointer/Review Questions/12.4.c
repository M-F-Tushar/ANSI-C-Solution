✅ 12.4 Explain the effects of the following statements:
(a) int a, *b = &a;

Declares an integer a and a pointer b initialized with the address of a.

(b) int p, *p;

This will cause a re-declaration error. The same variable name cannot be reused in the same scope.

(c) char *s;

Declares a pointer s to a character. It’s typically used for strings.

(d) a = (float *) &x;

This is incorrect syntax unless a is a float*. If the intention is to cast the address of x to a float pointer, the assignment should be to a float pointer:

float *a = (float *)&x;
(e) double(*f)();

Declares a pointer f to a function that returns a double.

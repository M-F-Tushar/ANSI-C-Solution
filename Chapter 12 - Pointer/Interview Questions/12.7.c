✅ 12.7 What is a function pointer?
A pointer that points to a function, allowing the function to be called indirectly.


int add(int a, int b) { return a + b; }
int (*fptr)(int, int) = add;
printf("%d", fptr(5, 3));

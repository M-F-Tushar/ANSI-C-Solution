
✅ 12.4 What is a wild pointer?
A wild pointer is uninitialized and may point to any random memory. Dereferencing it causes undefined behavior.


int *ptr; // wild pointer
*ptr = 10; // dangerous!

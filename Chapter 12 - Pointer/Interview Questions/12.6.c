
✅ 12.6 What is a void pointer?
A void pointer (void *) can hold the address of any data type. It needs to be type-cast before dereferencing.


void *ptr;
int a = 10;
ptr = &a;
// cast before use
printf("%d", *(int*)ptr);

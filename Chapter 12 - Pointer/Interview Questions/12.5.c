✅ 12.5 What is a dangling pointer?
A dangling pointer points to memory that has been freed or deallocated.


int *ptr = (int *)malloc(sizeof(int));
free(ptr);
// ptr is now dangling

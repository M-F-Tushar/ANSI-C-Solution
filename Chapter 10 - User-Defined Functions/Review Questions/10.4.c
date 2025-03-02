Describe the two ways of passing parameters to functions. When do you prefer to use each of them?
✅ Answer:

1. Call by Value
A copy of the variable is passed.
Changes do not affect the original variable.
Used when we do not want modifications to the original data.
✅ Example:

c
Copy
Edit
void change(int x) {
    x = 100;
}
2. Call by Reference
The address of the variable is passed.
Changes affect the original variable.
Used when we want to modify the original data.
✅ Example:

c
Copy
Edit
void change(int *x) {
    *x = 100;
}


(a) The parameters used in a function call are called
✅ Answer: Actual parameters
Explanation:

The parameters passed to a function while calling it are called actual parameters.
Example:
void func(int x) { }
int main() {
    func(10); // 10 is the actual parameter
}
(b) In prototype declaration, specifying ____ is optional.
✅ Answer: Variable names
Explanation:

While declaring a function prototype, specifying variable names is optional.
Example:
int sum(int, int);  // Correct (without variable names)
int sum(int a, int b);  // Also correct
(c) A ____ aids the compiler to check the matching between actual arguments and formal ones.
✅ Answer: Function prototype
Explanation:

A function prototype helps the compiler check if the number and types of arguments match.
Example:
int sum(int, int);  // Function prototype ensures correct usage
(d) In passing by pointers, the variables of the formal parameters must be prefixed with ____ in their declaration.
✅ Answer: * (asterisk)
Explanation:

Pointers must be used in function parameters to pass variables by reference.
Example:
void change(int *x) {  // `*` required
    *x = 20;
}
(e) By default, ____ is the return type of a C function.
✅ Answer: int
Explanation:

If no return type is specified, C assumes int as the return type.
Example:
myFunction() {  // Implicitly returns int
    return 5;
}
(f) A function that calls itself is known as a ____ function.
✅ Answer: Recursive
Explanation:

A recursive function is a function that calls itself.
Example:
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);  // Recursion
}
(g) A variable declared inside a function is called ____ variable.
✅ Answer: Local
Explanation:

A local variable is declared inside a function and only exists within that function.
Example:
void func() {
    int x = 10;  // Local variable
}
(h) ____ refers to the region where a variable is actually available for use.
✅ Answer: Scope
Explanation:

Scope defines where a variable can be accessed in a program.
(i) If a local variable has to retain its value between function calls, it must be declared as ____.
✅ Answer: static
Explanation:

A static variable retains its value between function calls.
Example:
void func() {
    static int x = 0;
    x++;
    printf("%d", x);  // Value persists
}
(j) A variable declared inside a function by default assumes ____ storage class.
✅ Answer: auto
Explanation:

By default, all local variables are auto storage class.

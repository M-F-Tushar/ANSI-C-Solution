(a) Any name can be used as a function name.
✅ Answer: False ❌

Explanation:
Function names in C must follow identifier naming rules:
Must start with a letter (A-Z or a-z) or an underscore (_).
Cannot be a reserved keyword (e.g., int, return, while).
Cannot have spaces or special characters (@, #, $, %, etc.).
Case-sensitive (sum and Sum are different names).
✅ Valid Function Names:

void myFunction();  // Valid
void _calculate();  // Valid
void sum_of_numbers();  // Valid
❌ Invalid Function Names:
void 1stFunction();  // ❌ Cannot start with a number
void return();  // ❌ "return" is a reserved keyword
void my function();  // ❌ Spaces are not allowed
(b) A function without a return statement is illegal.
✅ Answer: False ❌

Explanation:
A function without a return statement is legal in C if it has a void return type.
However, if a function is declared to return a value (e.g., int) but does not use return, it leads to undefined behavior.
✅ Correct Examples:
void greet() {  // Function without return (Valid because return type is void)
    printf("Hello, world!\n");
}

int getNumber() {  // Function with return (Valid)
    return 10;
}
❌ Incorrect Example:
int add(int a, int b) {  // ❌ Function should return an int
    int sum = a + b;  // No return statement (causes undefined behavior)
}
💡 Fix: Add return sum; inside the function.

(c) A function prototype must always be placed outside the calling function.
✅ Answer: False ❌

Explanation:
A function prototype is NOT always required.
If a function is defined before main(), the prototype is unnecessary.
A prototype is needed only when a function is defined after main() to prevent implicit declaration warnings.
✅ Example (Prototype Needed, Function Defined After main())

#include <stdio.h>

void greet();  // Prototype

int main() {
    greet();  // Calling before definition
}

void greet() {  // Function defined after main
    printf("Hello!\n");
}
✅ Example (Prototype NOT Needed, Function Defined Before main())

#include <stdio.h>

void greet() {  // Function defined before main
    printf("Hello!\n");
}

int main() {
    greet();  // Calling after definition
}
(d) The variable names used in prototype should match those used in the function definition.
✅ Answer: False ❌

Explanation:
In a function prototype, only the data types of parameters matter, not their names.
The variable names can be different in the prototype and definition.
✅ Example (Different Variable Names in Prototype and Definition)

#include <stdio.h>

int add(int, int);  // Prototype (no variable names required)

int main() {
    printf("%d", add(5, 10));
}

int add(int x, int y) {  // Variable names do not need to match
    return x + y;
}
💡 Key Point:
The function prototype only needs to specify the type of parameters, not the actual variable names.

(e) The return type of a function is int by default.
✅ Answer: True ✅

Explanation:
In C, if a function does not have an explicit return type, it is assumed to return an int by default.
However, it is good practice to always specify the return type explicitly.
✅ Example (Implicit int Return Type, Not Recommended)

sum(int a, int b) {  // Compiler assumes return type as int
    return a + b;
}
💡 Better Practice (Explicit int Return Type)

int sum(int a, int b) {  // Explicitly defining return type
    return a + b;
}

(f) When variable values are passed to functions, a copy of them is created in memory.
✅ Answer: True ✅
Explanation:

In call by value, a copy of the variable is passed to the function.
Any modification inside the function does not affect the original variable.
✅ Example (Call by Value)
#include <stdio.h>

void changeValue(int x) {  // x is a copy of num
    x = 100;  // Changes only the copy
}

int main() {
    int num = 10;
    changeValue(num);
    printf("%d", num);  // Output: 10 (original value remains unchanged)
}
(g) A function can be defined within the main function.
✅ Answer: False ❌
Explanation:

C does not support defining functions inside another function.
Functions must be declared at the global scope (outside main()).
❌ Invalid Example:
int main() {
    void hello() {  // ❌ Function inside main (not allowed)
        printf("Hello!");
    }
    hello();
}
✅ Correct Example (Function Defined Globally)

#include <stdio.h>

void hello() {  // Function defined globally
    printf("Hello!");
}

int main() {
    hello();  // Calling function
}
(h) A function can be defined and placed before the main function.
✅ Answer: True ✅
Explanation:

Functions can be defined before main().
If a function is defined before main(), no prototype is needed.
✅ Example:
#include <stdio.h>

void greet() {  // Function defined before main
    printf("Hello!\n");
}

int main() {
    greet();  // Works fine
}
(i) C functions can return only one value under their function name.
✅ Answer: True ✅
Explanation:

In C, a function can return only one value.
However, multiple values can be returned using pointers, arrays, or structures.
✅ Returning Multiple Values Using Pointers:

#include <stdio.h>

void getValues(int *a, int *b) {
    *a = 10;
    *b = 20;
}

int main() {
    int x, y;
    getValues(&x, &y);
    printf("%d %d", x, y);  // Output: 10 20
}
(j) A function in C should have at least one argument.
✅ Answer: False ❌
Explanation:

A function can have zero or more arguments.
Functions without arguments are allowed in C.
✅ Example (Function Without Arguments)

void greet() {
    printf("Hello!");
}
int main() {
    greet();  // Works fine
}
(k) Only a void type function can have void as its argument.
✅ Answer: False ❌
Explanation:

void as an argument means no parameters are passed to the function.
Any function (not just void return type) can have void as an argument.
✅ Example:
void display(void) {  // 'void' means no parameters
    printf("Hello!");
}
(l) Program execution always begins in the main function irrespective of its location in the program.
✅ Answer: True ✅
Explanation:

The execution of a C program always starts from main(), regardless of where it is written in the file.
✅ Example:
#include <stdio.h>

void func() {
    printf("This is func.\n");
}

int main() {  // Execution starts here
    func();
    return 0;
}
(m) In parameter passing by pointers, the formal parameters must be prefixed with the symbol * in their declarations.
✅ Answer: True ✅
Explanation:

In call by reference (passing pointers), the formal parameters must use * to access the actual variable.
✅ Example:
#include <stdio.h>

void changeValue(int *x) {  // '*' required in formal parameter
    *x = 100;
}

int main() {
    int num = 10;
    changeValue(&num);
    printf("%d", num);  // Output: 100 (value modified)
}
(n) In parameter passing by pointers, the actual parameters in the function call may be variables or constants.
✅ Answer: False ❌
Explanation:

Pointers require memory addresses.
Constants do not have modifiable memory addresses, so they cannot be passed by reference.
❌ Invalid Example:
void func(int *ptr) {
    *ptr = 10;  // ❌ Cannot modify a constant
}

int main() {
    func(&5);  // ❌ Error: Cannot take address of a constant
}
✅ Valid Example (Passing Variables by Reference)

int x = 5;
func(&x);  // ✅ Works fine
(o) A user-defined function must be called at least once; otherwise, a warning message will be issued.
✅ Answer: False ❌
Explanation:

Functions do not need to be called unless required.
Unused functions do not cause errors but may generate warnings.
✅ Example:
void unusedFunction() {
    printf("This function is never called.");
}

int main() {
    return 0;  // No error
}
(p) A function can call itself.
✅ Answer: True ✅
Explanation:

This is called recursion.
✅ Example (Recursive Function to Calculate Factorial)

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
(q) In passing arrays to functions, the function call must have the name of the array to be passed without brackets.
✅ Answer: True ✅
Explanation:

Arrays are always passed by reference (i.e., by address).
In function calls, only the name of the array is used.
✅ Example:
void display(int arr[]) {  // Array is passed without brackets
    printf("%d", arr[0]);
}

int main() {
    int nums[] = {1, 2, 3};
    display(nums);  // ✅ Correct
}
(r) In passing strings to functions, the actual parameter must be the name of the string post-fixed with size in brackets.
✅ Answer: False ❌
Explanation:

Strings are passed as character pointers, not with size brackets.
✅ Correct Example:
void printStr(char str[]) {  // No need for size in brackets
    printf("%s", str);
}

int main() {
    char name[] = "Alice";
    printStr(name);  // ✅ Works fine
}
(s) Global variables are visible in all blocks and functions in the program.
✅ Answer: True ✅

(t) Global variables cannot be declared as auto variables.
✅ Answer: True ✅
Explanation:

auto is for local variables only. Global variables cannot have auto storage class.

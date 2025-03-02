Distinguish between the following:
(a) Actual and Formal Arguments
✅ Answer:

Aspect	Actual Argument	Formal Argument
Definition	Values passed to a function	Parameters inside the function
Example	sum(10, 20); → 10, 20 are actual arguments	void sum(int a, int b) → a, b are formal arguments

b) & Operator and * Operator
✅ Answer:

Operator	Purpose
& (Address-of)	Returns the memory address of a variable
* (Dereference)	Accesses the value stored at an address
✅ Example:

c
Copy
Edit
int x = 10;
int *ptr = &x;  // & gets address
printf("%d", *ptr);  // * gets value from address

Global and Local Variables
✅ Answer:

Aspect	Local Variable	Global Variable
Scope	Inside a function	Accessible in all functions
Memory	Created and destroyed inside function	Stays throughout program execution
✅ Example:

c
Copy
Edit
int globalVar = 10;  // Global variable

void func() {
    int localVar = 5;  // Local variable
}

(d) Automatic and Static Variables
✅ Answer:

Aspect	Automatic Variable	Static Variable
Lifetime	Created and destroyed per function call	Retains value between calls
Storage Class	auto (default)	static
✅ Example:

c
Copy
Edit
void func() {
    static int x = 0;  // Retains value
    x++;
}

(e) Scope and Visibility of Variables
✅ Answer:

Concept	Scope	Visibility
Definition	Where a variable can be used	Where a variable can be accessed
Example	Local/global variables define scope	Private/public access in structure

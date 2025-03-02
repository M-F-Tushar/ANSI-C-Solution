Explain what is likely to happen when the following situations are encountered in a program.
(a) Actual arguments are less than the formal arguments in a function.
✅ Answer:

This results in a compilation error because every formal parameter in the function definition requires a corresponding actual argument.
📌 Example (Incorrect Code)

c
Copy
Edit
void sum(int a, int b) {
    printf("%d", a + b);
}

int main() {
    sum(5);  // ERROR: Missing second argument
}

(b) Data type of one of the actual arguments does not match with the type of the corresponding formal argument.
✅ Answer:

The compiler performs implicit type conversion if possible.
If the conversion is not possible, a compilation error occurs.
📌 Example

c
Copy
Edit
void display(int x) {
    printf("%d", x);
}

int main() {
    display(4.5);  // Implicit conversion from float to int (4.5 → 4)
}
(c) Data type of one of the arguments in a prototype does not match with the type of the corresponding formal parameter in the header line.
✅ Answer:

The compiler detects a type mismatch error if the prototype declaration and function definition do not match.
📌 Example (Incorrect Code)

c
Copy
Edit
void sum(int, float);  // Prototype
void sum(int a, int b) {  // ERROR: Mismatch
    printf("%d", a + b);
}
(d) The order of actual parameters in the function call is different from the order of formal parameters in a function where all the parameters are of the same type.
✅ Answer:

The compiler does not produce an error since data types match.
However, incorrect results may occur because parameters are swapped.
📌 Example

c
Copy
Edit
void divide(int a, int b) {
    printf("%d", a / b);
}

int main() {
    divide(2, 10);  // 2 / 10 = 0 (Integer division)
    divide(10, 2);  // 10 / 2 = 5
}
(e) The type of expression used in the return statement does not match with the type of the function.
✅ Answer:

If a function is declared as returning an int but returns a float, the value is truncated.
If a function does not return any value but uses return, a compilation error occurs.
📌 Example

c
Copy
Edit
int sum() {
    return 4.5;  // Returns 4 (float is truncated to int)
}

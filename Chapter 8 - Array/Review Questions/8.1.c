8.1 State whether the following statements are true or false:
(a) An array can store infinite data of similar type.
👉 False – An array has a fixed size defined at compile time, so it cannot store infinite data.

(b) In declaring an array, the array size can be a constant or variable or an expression.
👉 False – In C, the size of an array must be a constant value at compile time (except for variable-length arrays in C99).

(c) The declaration int x[2] = {1,2,3}; is illegal.
👉 True – The array size is 2, but the initializer provides 3 values, which is invalid.

(d) When an array is declared, C automatically initializes its elements to zero.
👉 False – C does not initialize array elements unless it is a static array or explicitly initialized.

(e) An expression that evaluates to an integral value may be used as a subscript.
👉 True – An array index can be any integral expression.

(f) In C, by default, the first subscript is zero.
👉 True – Arrays in C are zero-indexed.

(g) When initializing a multidimensional array, not specifying all its dimensions is an error.
👉 False – You can omit the size of the first dimension, but not the other dimensions.

(h) When we use expressions as a subscript, its result should be always greater than zero.
👉 False – Array indices can start at zero, not greater than zero.

(i) In C, we can use a maximum of 4 dimensions for an array.
👉 False – C allows more than 4 dimensions, but practical use is limited by memory.

(j) Accessing an array outside its range is a compile-time error.
👉 False – Accessing an array out of bounds causes undefined behavior at runtime, not a compile error.

(k) A char type variable cannot be used as a subscript in an array.
👉 False – char variables are implicitly converted to int when used as an index.

(l) An unsigned long int type can be used as a subscript in an array.
👉 True – Any integer type, including unsigned long, can be used as a subscript.

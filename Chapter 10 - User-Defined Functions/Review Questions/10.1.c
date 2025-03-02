10.1 Which of the following is true while passing an array to a function?
(a) The function is called by passing the array name without the brackets ✅ (True, as arrays decay into pointers when passed)
(b) The size of the array is not required to be specified in the formal parameter list ✅ (True, size can be omitted in function parameters)
(c) The function prototype must show that the argument is an array ✅ (True, it should specify that an array is being passed)
(d) All of the above ✅ (Correct answer, as all the above options are valid)
Answer: (d) All of the above

10.2 Which of the following is true about automatic variables?
(a) Automatic variables are declared inside a function in which they are to be utilized ✅ (True, automatic variables are local to the function)
(b) Automatic variables are created when the function is called and destroyed automatically when the function exits ✅ (True, they have function scope)
(c) A variable declared inside a function without a storage class specification is, by default, an automatic variable ✅ (True, local variables are auto by default)
(d) All of the above ✅ (Correct answer, as all the above options are valid)
Answer: (d) All of the above

10.3 Which of the following is true about global variables?
(a) A global variable is available only from the point of declaration to the end of the program ✅ (True, scope starts from declaration)
(b) A global variable can be accessed by all functions in a program ✅ (True, unless restricted by static)
(c) A global variable is initialized to zero by default ✅ (True, uninitialized global variables default to zero)
(d) All of the above ✅ (Correct answer, as all statements are true)
Answer: (d) All of the above

10.4 For which of the following types of variables, the variable value persists till the end of the program?
(a) External ❌ (External variables persist but can be modified)
(b) Static ✅ (Correct, static variables retain their value for the program duration)
(c) Automatic ❌ (Automatic variables are destroyed when the function exits)
(d) Register ❌ (Register variables have limited scope and are not persistent)
Answer: (b) Static

10.5 In a C program, the function definition can be placed at which of the following places?
(a) Before the main function ✅ (Valid, function definitions can appear before main)
(b) After the main function ✅ (Valid, but function prototype must be declared before main)
(c) Inside the main function ❌ (Invalid, function definitions cannot be nested inside main)
(d) Both 1 and 2 ✅ (Correct answer, as functions can be defined before or after main)
Answer: (d) Both 1 and 2

10.6 If the number and type of a function declaration and function definition do not match, then
(a) The type of the function definition is considered ❌
(b) The type of the function declaration is considered ❌
(c) A compiler error is generated for the mismatch ✅ (Correct, mismatch leads to an error)
(d) None of the above ❌
Answer: (c) A compiler error is generated for the mismatch

10.7 Which of the following is true about function declaration?
(a) A function declaration statement is suffixed by a semi-colon ✅ (True, function prototypes end with ;)
(b) It is not necessary to specify the variable names in the function prototype; only the argument type is sufficient ✅ (True, only types are needed)
(c) A function declaration statement can be skipped as long as the function definition is present in the program ✅ (True, but this can lead to implicit declaration warnings)
(d) All of the above ✅ (Correct, all statements are true)
Answer: (d) All of the above

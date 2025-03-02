5.1 String constants are enclosed within _______ symbols.
Options:
(a) Single quote
(b) Double quote
(c) []
(d) None of the above

Answer: (b) Double quote

Explanation:
In C, string constants (also known as string literals) are enclosed in double quotes ("").
Example:
char str[] = "Hello, World!";
Single quotes ('') are used for character constants, not string constants.

5.2 Which of the following is used to separate specifiers(%d, %f) in a format string within a scanf statement?
Options:
(a) Single white space
(b) Comma
(c) Double quotes
(d) Semi-colon

Answer: (a) Single white space

Explanation:
In scanf(), format specifiers are separated using whitespace (space, tab, newline, etc.). Commas, double quotes, and semicolons are not used as separators.
Example:
int a, b;
scanf("%d %d", &a, &b);  // Space separates the format specifiers

5.3 Which of the following functions can be used to print a single character as output?
Options:
(a) scanf()
(b) printf()
(c) putchar()
(d) Both 2 and 3

Answer: (d) Both 2 and 3

Explanation:

printf() can print characters using %c.
putchar() directly prints a single character.
Example using printf():
printf("%c", 'A');  // Prints: A
Example using putchar():
putchar('A');  // Prints: A
scanf() is used for input, not output, so option (a) is incorrect.


5.4 Which of the following statements are true about scanf() function?
Options:
(a) The reading will be terminated when scanf encounters a mismatch of data or a character that is not valid for the value being read.
(b) The scanf() function returns the number of items that are successfully read.
(c) Any unread data items in a line are considered as part of the data input line to the next scanf() function call.
(d) All of the above

Answer: (d) All of the above

Explanation:
(a) If the input does not match the expected format, scanf() stops reading.
(b) scanf() returns the number of successfully read items.
(c) Unread input remains in the input buffer and is available for the next scanf() call.
    
Example:
int x;
if (scanf("%d", &x) == 1) {
    printf("Input accepted: %d", x);
} else {
    printf("Invalid input.");
}


5.5 Which of the following statements is false about printf() function?
Options:
(a) The format specifications in a printf() statement should match the variables in number, order, and type.
(b) If the width of a value being printed by the printf() function is greater than the width specified in the format specification, then the value gets printed in full, overriding the minimum specification.
(c) Using an address operator & with a variable in the printf statement will result in a runtime error.
(d) All of the above are true.

Answer: (c) Using an address operator & with a variable in the printf statement will result in a runtime error.

Explanation:

(a) True. The number, order, and type of format specifiers must match the corresponding variables.
(b) True. If the value is longer than the specified width, printf() still prints the full value.
(c) False. Using & in printf() doesn’t cause a runtime error but is incorrect syntax unless used with pointers.
Example (Incorrect Usage):
int x = 10;
printf("%d", &x);  // Incorrect, &x is the address, not a valid integer value


5.6 Which of the following format specifiers can be used to read floating type values?
Options:
(a) %e
(b) %f
(c) %g
(d) All of the above

Answer: (d) All of the above

Explanation:

%e - Scientific notation (e.g., 1.23e+02).
%f - Standard floating-point notation (e.g., 123.456).
%g - Automatically selects %e or %f based on precision.
Example:
float num;
scanf("%f", &num);  // Reads a float value


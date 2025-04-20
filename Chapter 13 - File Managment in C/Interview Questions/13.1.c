
3.1 Difference between printf and cprintf functions
printf:
Function: Standard C library function.

Purpose: Used to print output to the console (standard output).

Syntax:

c
Copy code
int printf(const char *format, ...);
Usage: You can use printf to print data in formatted output (e.g., printing integers, floating-point numbers, strings, etc.) to the standard output (screen).

cprintf:
Function: Available in Turbo C/C++, which is an older compiler.

Purpose: Similar to printf but can be used for coloring the output text in the console.

Syntax:

c
Copy code
void cprintf(const char *format, ...);
Usage: It has additional features like changing text color, which is specific to Turbo C/C++.

Key Difference:
Portability: printf is part of the standard C library and is supported by all compilers, while cprintf is specific to Turbo C/C++ and not available in modern compilers.

Text Formatting: cprintf offers the ability to change text colors in the console, which printf does not.


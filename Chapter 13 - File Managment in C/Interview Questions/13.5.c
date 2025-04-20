
13.5 Difference between printf and sprintf functions
printf:
Function: Prints formatted data to the standard output (usually the console).

Syntax:


int printf(const char *format, ...);
Usage: Sends formatted output to the console (screen).

sprintf:
Function: Prints formatted data to a string (not to the console).

Syntax:

c
Copy code
int sprintf(char *str, const char *format, ...);
Usage: Stores the formatted output in a string (variable), instead of printing it to the screen.

Example:


char buffer[100];
sprintf(buffer, "My age is %d", 25);  // Stores the formatted string in buffer
Key Differences:
printf sends output to the console, whereas sprintf stores the formatted output in a string variable.

sprintf is useful when you need to build a string rather than just display it.


/*5.3
Distinguish between the following pairs:
(a) getchar and scanf functions.
(b)%s and %c specifications for reading.
(c)%g and %f specification for printing.
(d)%s and %[ ] specifications for reading.
(e)%f and %e specifications for printing.
*/
(a) getchar and scanf functions
getchar() reads a single character.
scanf() reads formatted input.
Example:
char ch = getchar();  // Reads one character
scanf("%c", &ch);     // Also reads one character

(b) %s and %c specifications for reading
%s reads a string (stops at whitespace).
%c reads a single character, including spaces.
Example:

char ch;
char str[10];
scanf("%s", str);  // Input: "Hello World" → stores "Hello"
scanf("%c", &ch);  // Reads one character, including whitespace.

(c) %g and %f specification for printing
%f prints in fixed-point notation.
%g chooses the shortest representation (%e or %f).
Example:
printf("%f", 123.45);  // Output: 123.450000
printf("%g", 123.45);  // Output: 123.45

(d) %s and %[ ] specifications for reading
%s stops reading at whitespace.
%[ ] allows custom delimiters.
Example:
char str[10];
scanf("%[A-Z]", str); // Reads only uppercase letters.

(e) %f and %e specifications for printing
%f → Fixed-point notation.
%e → Scientific notation.
Example:
printf("%f", 123.45);  // 123.450000
printf("%e", 123.45);  // 1.234500e+02


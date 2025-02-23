(a) The %hd specification is used to read or write a short integer.
Example:
short int num;
scanf("%hd", &num);

(b) For reading a double type value, we must use the specification %lf.
Example:
double d;
scanf("%lf", &d);

(c) For using character functions, we must include the header file <ctype.h>.

(d) To print the data left-justified, we must use %- in the field specification.
Example:
printf("%-8d", 25); // Left-justified: "25      "

(e) The conversion specifier %x is used to print integers in hexadecimal form.
Example:
printf("%x", 255); // Output: "ff"

(f) The specification %*d is used to read a data from input list and discard it without assigning it to any variable.
Example:
int a;
scanf("%*d %d", &a); // Ignores the first integer input.


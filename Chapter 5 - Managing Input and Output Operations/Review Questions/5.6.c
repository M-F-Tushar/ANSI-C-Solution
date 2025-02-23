/*
For questions 5.6 to 5.10 assume that the following declarations
have been made in the program:
int year, count;
float amount, price;
char code, city[10];
double root;
5.6 What will be the values stored in the variables year and code
when the data
1988, x
is keyed in as a response to the following statements:
(a) scanf(“%d %c”, &year, &code);
(b) scanf(“%c %d”, &year, &code);
(c) scanf(“%d %c”, &code, &year);
(d) scanf(“%s %c”, &year, &code);
*/

5.6 What will be the values stored in the variables year and code when the data 1988, x is keyed in as a response?
(a) scanf("%d %c", &year, &code);
Input: 1988 x

%d reads 1988 → stored in year.
%c reads the space before x, so it actually reads ' ' (space).
Result:
year = 1988, code = ' ' (space)

(b) scanf("%c %d", &year, &code);
Input: 1988 x

%c reads 1 (first character of 1988).
%d tries to read a number but fails because x is not numeric.
Result:
year = '1', code gets an undefined value.

(c) scanf("%d %c", &code, &year);
Input: 1988 x

%d reads 1988 → stored in code.
%c reads the space before x, so year = ' ' (space).
Result:
code = 1988, year = ' ' (space)

(d) scanf("%s %c", &year, &code);
Input: 1988 x

%s treats year as a string, but year is an int (incorrect usage).
Undefined behavior occurs.

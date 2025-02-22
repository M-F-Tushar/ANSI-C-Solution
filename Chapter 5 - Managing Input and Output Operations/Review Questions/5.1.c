REVIEW QUESTIONS (True/False)

5.1 (a) The purpose of the header file <studio.h> is to store the programs created by the users.
False

Explanation:
The <stdio.h> header file provides functions for input and output operations, like printf() and scanf(). It does not store user programs.

(b) The C standard function that receives a single character from the keyboard is getchar().
True

Explanation:
getchar() is used to take a single character input from the user.
Example:
char ch;
ch = getchar();
(c) The input list in a scanf statement can contain one or more variables.
True

Explanation:
scanf() can read multiple variables:
int a, b;
scanf("%d %d", &a, &b);
(d) The scanf function cannot be used to read a single character from the keyboard.
False

Explanation:
scanf() can read a single character using %c.
char ch;
scanf("%c", &ch);

(e) The getchar cannot be used to read a line of text from the keyboard.
True

Explanation:
getchar() reads only a single character at a time, not an entire line of text. To read a line, use gets() (deprecated) or fgets().
Example:
    char ch = getchar(); // Reads one character

(f) Variables form a legal element of the format control string of a printf statement.
True

Explanation:
Format control strings in printf statements use variables for output.
Example:
int num = 10;
printf("The number is %d", num);

(g) The format specification %+ -8d prints an integer left-justified in a field width of 8 with a plus sign if the number is positive.
True

Explanation:

%+d ensures a sign (+ for positive numbers, - for negative).
-8d means left-justified in a field of width 8.
Example:
printf("%+ -8d", 25); // Output: "+25     "

(h) If the field width of a format specifier is larger than the actual width of the value, the value is printed right-justified in the field.
True

Explanation:
By default, printf() right-justifies numbers when a width is specified.
Example:
    printf("%8d", 25); // Output: "      25"


(i) The format specification %5s will print only the first 5 characters of a given string.
False

Explanation:
%5s ensures that at least 5 characters are printed, right-justified, but it does not truncate a longer string. To limit characters, use %.5s.
Example:
    printf("%.5s", "HelloWorld"); // Output: "Hello"


(j) When an input stream contains more data than the number of specifications in a scanf statement, the unused items will be used by the next scanf call.
True

Explanation:
Extra input remains in the buffer for future scanf() calls.
Example:
int a;
char ch;
scanf("%d", &a);   // Input: 10 A
scanf("%c", &ch);  // ch gets 'A' from buffer.


(k) Format specifiers for output convert internal representations for data to readable characters.
True

Explanation:
For example, %d converts an integer from memory to human-readable form.

(l) The print list in a printf statement can contain function calls.
True

Explanation:
Example:
    printf("The sum is %d", add(3, 4));
Where add() is a function returning an integer.

9.1 State whether the following statements are true or false:
(a) When initializing a string variable during its declaration, we must include the null character as part of the string constant, like "GOOD\0".
✅ Answer: False

Explanation:
In C, when you define a string constant like "GOOD", the compiler automatically appends the null character (\0) at the end.

Therefore, you do not need to manually add the null character.

(b) The gets function automatically appends the null character at the end of the string read from the keyboard.
✅ Answer: True

Explanation:
The gets() function reads input until a newline character (\n) is encountered and automatically appends the null character at the end of the string.

However, gets() is unsafe and deprecated because it can cause buffer overflow.

(c) When reading a string with scanf, it automatically inserts the terminating null character.
✅ Answer: True

Explanation:
scanf("%s", str) reads a string and automatically appends the null character at the end.

(d) The input function gets has one string parameter.
✅ Answer: True

Explanation:
The gets() function takes one string parameter (a character array).

(e) The function scanf cannot be used in any way to read a line of text with white spaces.
✅ Answer: False

Explanation:
scanf("%[^\n]", str) can read a full line of text, including white spaces, until a newline is encountered.

(f) The function getchar skips white space during input.
✅ Answer: False

Explanation:
getchar() reads the next character from the input stream, including white spaces.

(g) In C, strings cannot be initialized at runtime.
✅ Answer: False

Explanation:
Strings can be initialized at runtime using functions like strcpy() or strcat().

(h) String variables cannot be used with the assignment operator.
✅ Answer: True

Explanation:
Strings cannot be assigned directly using =. Use strcpy() for assignment.
✅ Example:

char str[10];
str = "Hello"; // ❌ Invalid
strcpy(str, "Hello"); // ✅ Correct
(i) We cannot perform arithmetic operations on character variables.
✅ Answer: False

Explanation:
Characters are internally represented by ASCII values (integers).

Therefore, you can perform arithmetic operations on characters.

✅ Example:

char ch = 'A';
printf("%c", ch + 1); // Output: B
(j) The ASCII character set consists of 128 distinct characters.
✅ Answer: True

Explanation:
The standard ASCII set has 128 characters (0 to 127).

(k) In the ASCII collating sequence, the uppercase letters precede lowercase letters.
✅ Answer: True

Explanation:
ASCII values of uppercase letters (A = 65) are lower than lowercase letters (a = 97).

(l) In C, it is illegal to mix character data with numeric data in arithmetic operations.
✅ Answer: False

Explanation:
Characters are treated as integers internally (based on ASCII values), so they can be mixed with numeric data in arithmetic operations.

✅ Example:

char ch = 'A';
int num = 5;
printf("%c", ch + num); // Output: F
(m) The function call strcpy(s2, s1) copies string s2 into string s1.
✅ Answer: False

Explanation:
strcpy(s1, s2) copies string s2 into string s1.

Therefore, the order is incorrect in the statement.

(n) The function call strcmp("abc", "ABC") returns a positive number.
✅ Answer: True

Explanation:
'a' (ASCII 97) > 'A' (ASCII 65), so the result is positive.

(o) We can assign a character constant or a character variable to an int type variable.
✅ Answer: True

Explanation:
A character constant is stored as an ASCII value, which is an int.

✅ Example:

char ch = 'A';
int x = ch;
printf("%d", x); // Output: 65

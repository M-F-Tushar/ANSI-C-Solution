9.1 Which of the following values can be returned by the strcmp() function?
Options:

(a) Positive value

(b) Negative value

(c) Zero

(d) All of these

✅ Answer: (d) All of these

Explanation:
The strcmp() function compares two strings and returns:

A positive value if the first string is greater than the second string (based on ASCII values).

A negative value if the first string is less than the second string.

Zero if both strings are equal.
Therefore, the correct answer is (d) All of these.

9.2 Which of the following functions is used to concatenate only a specific number of characters from one string to another?
Options:

(a) strcat()

(b) strstr()

(c) strncat()

(d) None of these

✅ Answer: (c) strncat()

Explanation:
strcat() – Concatenates full strings.

strncat() – Concatenates a specific number of characters from one string to another.

strstr() – Finds a substring in a string.

Therefore, the correct answer is (c) strncat().

9.3 Which of the following functions is used to search a substring in another string?
Options:

(a) searchstr()

(b) strstr()

(c) substr()

(d) None of these

✅ Answer: (b) strstr()

Explanation:
strstr() is used to find the first occurrence of a substring in a string.

searchstr() and substr() are not valid C functions.

Therefore, the correct answer is (b) strstr().

9.4 Which of the following arrays can be used to store the names of 10 employees working in an organization?
Options:

(a) employee[10][80]

(b) employee[80][10]

(c) employee[][10][80]

(d) None of these

✅ Answer: (a) employee[10][80]

Explanation:
To store names of 10 employees:

The outer dimension (10) represents the number of employees.

The inner dimension (80) represents the maximum length of each name.

Therefore, the correct answer is (a) employee[10][80].

9.5 Which of the following is the correct input statement for reading a string from the terminal?
Options:

(a) scanf("%[^\n]", str);

(b) gets(str);

(c) scanf("%[^\n]", str[0]);

(d) All of these are correct

✅ Answer: (a) scanf("%[^\n]", str);

Explanation:
scanf("%[^\n]", str) reads a full line of input (including spaces) until a newline is encountered.

gets(str) is unsafe and deprecated due to buffer overflow risk.

scanf("%[^\n]", str[0]) is incorrect because str[0] refers to a single character.

Therefore, the correct answer is (a) scanf("%[^\n]", str);

9.6 A character array str[] stores the following string: N E W \0
What will be the return value of strlen(str) function?
Options:

(a) 3

(b) 4

(c) 0

(d) None of these

✅ Answer: (a) 3

Explanation:
strlen(str) returns the number of characters before the null character (\0):

N → 1

E → 2

W → 3

\0 – Terminates the string

Therefore, the length is 3.

9.7 Which of the following is an incorrect input statement for reading a string from the terminal?
Options:

(a) scanf("%[^\n]", str);

(b) gets(str);

(c) scanf("%s", &str[0]);

(d) All of these are correct

✅ Answer: (b) gets(str);

Explanation:
scanf("%[^\n]", str) – Correct for reading full line input.

gets(str) – Incorrect and unsafe due to buffer overflow risk (deprecated).

scanf("%s", &str[0]) – Correct for reading strings without spaces.

Therefore, the correct answer is (b) gets(str);

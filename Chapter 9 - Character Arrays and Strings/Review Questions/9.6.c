
9.6 Assuming the variable string contains the value "The sky is the limit.", determine what output of the following program segments will be:
(a) printf("%s", string);
✅ Answer: The sky is the limit.

(b) printf("%2s", string);
✅ Answer: The sky is the limit.

%2s formats the output to be at least 2 characters wide, but since the string is longer, the full string is printed without truncation.

(c) printf("%5s", string);
✅ Answer: The sky is the limit.

%5s specifies a minimum width of 5 characters, but since the string is longer, it prints the whole string.

(d)

for (i = 0; string[i] != '\0'; i++)
    printf("%c", string[i]);
✅ Answer: The sky is the limit.

This loop prints each character in the string one by one.


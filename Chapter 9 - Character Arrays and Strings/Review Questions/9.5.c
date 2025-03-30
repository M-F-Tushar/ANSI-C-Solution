9.5 Strings can be assigned values as follows:
(a) During type declaration:
✅ Example:

char string[] = "Hello";
(b) Using strcpy() function:
✅ Example:

char s1[20];
strcpy(s1, "Hello");
(c) Reading using scanf:
✅ Example:

char s[20];
scanf("%s", s);
(d) Reading using gets:
✅ Example:

char s[20];
gets(s);
✅ Comparison:

scanf stops at a space.

gets reads the whole line (but is unsafe).

strcpy copies the whole string.

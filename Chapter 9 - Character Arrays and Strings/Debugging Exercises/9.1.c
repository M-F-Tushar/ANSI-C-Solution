a) Code:

char str[10];
strncpy(str, "GOD", 3);
printf("%s", str);
✅ Identified Issues:
strncpy() does not automatically append a null character ('\0') if the source string's length matches or exceeds the specified length.

This can lead to garbage values being printed after "GOD" since the string is not properly terminated.

✅ Fixed Code:

char str[10];
strncpy(str, "GOD", 3);
str[3] = '\0';   // Manually add the null terminator
printf("%s", str);
✅ Explanation:
strncpy() copies exactly 3 characters but doesn’t append '\0'.

Adding str[3] = '\0'; ensures the string is properly null-terminated.

(b) Code:

char str[10];
strcpy(str, "Balagurusamy");
if (strstr("Balagurusamy", "guru") == 0)
    printf("Substring is found");
✅ Identified Issues:
strstr() returns a pointer to the substring if found, or NULL if not found — NOT zero.

The condition if (strstr(...) == 0) is wrong; it should be if (strstr(...) != NULL).

✅ Fixed Code:

char str[10];
strcpy(str, "Balagurusamy");
if (strstr(str, "guru") != NULL)
    printf("Substring is found");
✅ Explanation:
strstr() returns a pointer to the first occurrence of "guru" in "Balagurusamy".

Comparing it to 0 is incorrect; it should be checked against NULL.

(c) Code:

char s1[5], s2[10];
gets(s1);
gets(s2);
✅ Identified Issues:
gets() is unsafe and should not be used since it doesn’t check buffer size, which may cause buffer overflow.

Replace gets() with fgets() to prevent overflow and secure input handling.

✅ Fixed Code:

char s1[5], s2[10];
fgets(s1, sizeof(s1), stdin);
fgets(s2, sizeof(s2), stdin);
✅ Explanation:
fgets() ensures that input size does not exceed the buffer size, preventing overflow.

sizeof(s1) and sizeof(s2) make sure the input stays within bounds.

✅✅✅ Final Fixed Code:

// (a) Fixed
char str[10];
strncpy(str, "GOD", 3);
str[3] = '\0';
printf("%s", str);

// (b) Fixed
char str[10];
strcpy(str, "Balagurusamy");
if (strstr(str, "guru") != NULL)
    printf("Substring is found");

// (c) Fixed
char s1[5], s2[10];
fgets(s1, sizeof(s1), stdin);
fgets(s2, sizeof(s2), stdin);

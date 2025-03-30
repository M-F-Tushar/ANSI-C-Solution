9.14 Compare the working of the following functions:
(a) strcpy and strncpy
✅ strcpy():

Copies the entire source string into the destination.

Stops at the null character (\0).

✅ strncpy():

Copies up to n characters from the source.

If the source is shorter than n, the remaining characters are filled with '\0'.

(b) strcat and strncat
✅ strcat():

Appends the full source string to the destination.

Stops at the null character.

✅ strncat():

Appends up to n characters from the source.

Stops when n characters are appended or the source ends.

(c) strcmp and strncmp
✅ strcmp():

Compares two strings character by character.

Returns:

0 if equal

Positive if first > second

Negative if first < second

✅ strncmp():

Compares up to n characters of two strings.

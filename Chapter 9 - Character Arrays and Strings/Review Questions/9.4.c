9.4 Character strings in C are automatically terminated by the null character. Explain how this feature helps in string manipulations.
✅ Answer:

The null character (\0) indicates the end of the string.

Functions like strlen(), strcpy(), and strcat() rely on the null character to determine the end of a string.

Without a null character, string functions may read garbage values from memory.

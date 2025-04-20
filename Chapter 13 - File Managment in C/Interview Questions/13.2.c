13.2 Difference between getc, getw, and fscanf functions
getc:
Function: Reads one character from a file.

Syntax:


int getc(FILE *stream);
Usage: Reads a single character (as an int) from the specified file and returns the character as an integer (or EOF for end of file).

Example:


char ch = getc(fp);  // Reads a character from the file
getw:
Function: Reads a whole integer from a file.

Syntax:

int getw(FILE *stream);
Usage: Reads an integer value from a file and returns it. It’s used to handle binary data.

Example:

int num = getw(fp);  // Reads an integer from the file
fscanf:
Function: Reads formatted input from a file (similar to scanf but works with files).

Syntax:

int fscanf(FILE *stream, const char *format, ...);
Usage: Reads data from a file according to the format specified (like integers, strings, floats, etc.).

Example:


int num;
fscanf(fp, "%d", &num);  // Reads an integer from the file
Key Differences:
getc reads one character, getw reads one integer from the file.

fscanf allows formatted reading (like scanf), which makes it more flexible than getc and getw.



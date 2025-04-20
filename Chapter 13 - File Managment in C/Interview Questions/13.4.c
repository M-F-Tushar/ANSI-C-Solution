
13.4 Purpose of fseek function
Function: fseek is used to move the file pointer to a specific location within the file.

Syntax:


int fseek(FILE *stream, long offset, int whence);
stream: File pointer (opened file).

offset: The number of bytes to move.

whence: The position from where to move (SEEK_SET, SEEK_CUR, SEEK_END).

Usage: It allows random access to a file by moving the file pointer to a specific location.

Example:


FILE *fp = fopen("example.txt", "r");
fseek(fp, 10, SEEK_SET);  // Move the pointer 10 bytes from the beginning
Purpose:
It’s used to move the file pointer to a specific byte position in the file. This is helpful for seeking specific data in files, such as in random access files.


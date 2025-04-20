
13.3 Purpose of ftell function
Function: ftell is used to get the current position of the file pointer in a file.

Syntax:


long ftell(FILE *stream);
Usage: It returns the current position of the file pointer in the file, in terms of bytes from the beginning of the file.

Example:


FILE *fp = fopen("example.txt", "r");
long pos = ftell(fp);
printf("Current file position: %ld\n", pos);
fclose(fp);
Purpose:
It is often used after moving the file pointer (with fseek or fgetpos) to track where you are in the file.


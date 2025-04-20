✅ 13.9 Explain the general format of fseek() function.
c
Copy code
int fseek(FILE *fp, long offset, int origin);
offset: How many bytes to move

origin: From where to move (SEEK_SET, SEEK_CUR, SEEK_END)

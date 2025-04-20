
✅ 13.19 Algorithm to append contents of one file to another

1. Open source file in read mode.
2. Open destination file in append mode.
3. While not EOF in source file:
    - Read a character from source.
    - Write that character to destination.
4. Close both files.
💡 Code version:

e
FILE *src = fopen("file1.txt", "r");
FILE *dest = fopen("file2.txt", "a");
char ch;

while ((ch = getc(src)) != EOF)
    putc(ch, dest);

fclose(src);
fclose(dest);

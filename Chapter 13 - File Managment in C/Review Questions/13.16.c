
✅ 13.16 Example of feof() and ferror()

FILE *fp = fopen("data.txt", "r");
char ch;

if (fp == NULL) {
    printf("Error opening file.\n");
    exit(1);
}

while ((ch = getc(fp)) != EOF) {
    putchar(ch);
}

if (feof(fp))
    printf("Reached end of file.\n");
if (ferror(fp))
    printf("Error reading file.\n");

fclose(fp);

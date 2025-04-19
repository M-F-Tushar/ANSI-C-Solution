
✅ 12.13 Output of this program:

int f(char *p) {
    char *q = p;
    while (*p) p++;
    return (p - q);
}

main() {
    char str[] = "ANSI";
    printf("%d", f(str));
}
Explanation:

The function counts the length of the string by iterating until *p == '\0'.

"ANSI" has 4 characters.

So, Output: 4


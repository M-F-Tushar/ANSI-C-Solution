
✅ 12.5 Remove character from string

void removeChar(char *str, char ch) {
    char *src = str, *dst = str;
    while (*src) {
        if (*src != ch) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

✅ 12.13 Compare two strings using pointers
Code:


int compareStrings(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            return 0;  // not equal
        s1++;
        s2++;
    }
    return (*s1 == '\0' && *s2 == '\0');  // true if both end together
}


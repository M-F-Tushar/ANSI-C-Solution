
✅ 12.11 Copy a string using pointers
Code:

c
Copy code
void copyString(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

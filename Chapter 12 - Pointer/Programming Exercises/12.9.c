✅ 12.9 Display string and length without string functions
Task:

Use pointer to display a string.

Count length without strlen().

Code:

c
Copy code
void displayStringAndLength(char *str) {
    int len = 0;
    while (*str != '\0') {
        printf("%c", *str);
        len++;
        str++;
    }
    printf("\nLength: %d\n", len);
}

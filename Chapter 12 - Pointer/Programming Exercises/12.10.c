✅ 12.10 Print vowels in a string using pointers
Code:

c
Copy code
void printVowels(char *str) {
    while (*str) {
        if (strchr("aeiouAEIOU", *str))
            printf("%c ", *str);
        str++;
    }
}

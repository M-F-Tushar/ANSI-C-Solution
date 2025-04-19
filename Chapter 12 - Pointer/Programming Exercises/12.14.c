✅ 12.14 Count total vowels using function and pointer to pointer
Code:


int countTotalVowels(char **strs, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        char *p = strs[i];
        while (*p) {
            if (strchr("aeiouAEIOU", *p))
                total++;
            p++;
        }
    }
    return total;
}

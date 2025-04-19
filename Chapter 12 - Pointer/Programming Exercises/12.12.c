✅ 12.12 Count vowels, consonants, digits using pointers
Code:


void countElements(char *str, int *vc, int *cc, int *dc) {
    *vc = *cc = *dc = 0;
    while (*str) {
        if (isalpha(*str)) {
            if (strchr("aeiouAEIOU", *str))
                (*vc)++;
            else
                (*cc)++;
        } else if (isdigit(*str)) {
            (*dc)++;
        }
        str++;
    }
}

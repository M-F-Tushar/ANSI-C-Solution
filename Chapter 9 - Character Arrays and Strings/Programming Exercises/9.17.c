9.17 - Find Largest and Smallest Word in a String
Solution in C:
c
Copy
Edit
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[200], word[50], minWord[50], maxWord[50];
    int i = 0, j = 0, minLen = INT_MAX, maxLen = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > 0) {
                if (j < minLen) {
                    minLen = j;
                    strcpy(minWord, word);
                }
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(maxWord, word);
                }
            }
            j = 0;
        }
        i++;
    }

    printf("Smallest word: %s\n", minWord);
    printf("Largest word: %s\n", maxWord);

    return 0;
}

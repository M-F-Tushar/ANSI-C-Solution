9.6 Write a program to replace a word with another in a given string.
Solution:

#include <stdio.h>
#include <string.h>

void replaceWord(char *str, char *oldWord, char *newWord) {
    char temp[1000];
    char *pos = strstr(str, oldWord);

    if (pos == NULL) {
        printf("Word not found!\n");
        return;
    }

    strncpy(temp, str, pos - str);
    temp[pos - str] = '\0';

    strcat(temp, newWord);
    strcat(temp, pos + strlen(oldWord));

    printf("Modified string: %s\n", temp);
}

int main() {
    char str[1000], oldWord[100], newWord[100];

    printf("Enter the text: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter word to replace: ");
    scanf("%s", oldWord);

    printf("Enter new word: ");
    scanf("%s", newWord);

    replaceWord(str, oldWord, newWord);

    return 0;
}
Explanation:
Uses strstr() and string manipulation to replace words.



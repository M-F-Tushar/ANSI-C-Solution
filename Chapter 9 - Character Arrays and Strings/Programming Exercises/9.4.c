9.4 Write a program which will read a text and count all occurrences of a particular word.
Solution:

#include <stdio.h>
#include <string.h>

int main() {
    char text[500], word[50];
    int count = 0;
    char *pos;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the word to count: ");
    scanf("%s", word);

    pos = strstr(text, word);
    while (pos != NULL) {
        count++;
        pos = strstr(pos + 1, word);
    }

    printf("The word '%s' appears %d times.\n", word, count);

    return 0;
}
Explanation:
Uses strstr() to find and count occurrences of a word.



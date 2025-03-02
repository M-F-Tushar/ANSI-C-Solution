/*
Design a function locate ( ) that takes two character arrays s1 and
s2 and one integer value m as parameters and inserts the string s2
into s1 immediately after the index m .
Write a program to test the function using a real-life situation.
(Hint: s2 may be a missing word in s1 that represents a line of
text).
*/
#include <stdio.h>
#include <string.h>

// Function to insert one string into another at a given index
void locate(char s1[], char s2[], int m) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (m < 0 || m > len1) {
        printf("Invalid index\n");
        return;
    }

    // Shift characters to make space for s2
    for (int i = len1; i >= m; i--) {
        s1[i + len2] = s1[i];
    }

    // Insert s2 at index m
    for (int i = 0; i < len2; i++) {
        s1[m + i] = s2[i];
    }
}

int main() {
    char s1[100] = "Hello World";
    char s2[] = " Beautiful";
    int m = 5;

    locate(s1, s2, m);
    printf("Modified String: %s\n", s1);

    return 0;
}
/*
The locate() function:

Takes two strings (s1, s2) and an index m.
Inserts s2 into s1 after index m.
*/

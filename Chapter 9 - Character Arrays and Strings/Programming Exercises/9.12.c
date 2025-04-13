9.12 Count occurrences of a substring in a string using strstr()
Problem Statement:
Write a program to read a line of text from the keyboard and print out the number of occurrences of a given substring using the strstr() function.

C Program:

#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, char *substr) {
    int count = 0;
    char *pos = str;

    while ((pos = strstr(pos, substr)) != NULL) {
        count++;
        pos += strlen(substr); // Move the pointer forward
    }

    return count;
}

int main() {
    char str[200], substr[50];

    // Input main string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    // Input substring to search for
    printf("Enter substring to search: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = 0; // Remove newline character

    // Count occurrences
    int occurrences = countOccurrences(str, substr);

    printf("The substring '%s' occurs %d time(s) in the given string.\n", substr, occurrences);

    return 0;
}
Explanation:
Reads a string from the user.

Reads the substring that needs to be searched.

Uses strstr() inside a loop to find occurrences.

Moves the pointer forward after each match to continue searching.

Prints the total count of occurrences.

Example Runs:
✅ Example 1:
lua
Copy
Edit
Enter a string: banana banana apple banana
Enter substring to search: banana
The substring 'banana' occurs 3 time(s) in the given string.
✅ Example 2:
lua
Copy
Edit
Enter a string: hello world, hello everyone
Enter substring to search: hello
The substring 'hello' occurs 2 time(s) in the given string.
✅ Example 3 (No Match):
vbnet
Copy
Edit
Enter a string: This is a test string.
Enter substring to search: python
The substring 'python' occurs 0 time(s) in the given string.

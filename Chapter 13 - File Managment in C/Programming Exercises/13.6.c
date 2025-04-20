
13.6 Write a program that prompts the user for two files, one
containing a line of text known as source file and other, an empty
file known as target file and then copies the contents of source
file into target file.
Modify the program so that a specified character is deleted from
the source file as it is copied to the target file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char src_name[100], dest_name[100];
    FILE *src, *dest;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", src_name);
    printf("Enter target file name: ");
    scanf("%s", dest_name);

    src = fopen(src_name, "r");
    dest = fopen(dest_name, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");

    return 0;
}

Part 2: Copy while deleting a specific character

// Add after file opening in above program
char remove_char;
printf("Enter character to remove during copy: ");
scanf(" %c", &remove_char);  // Note the space to clear buffer

while ((ch = fgetc(src)) != EOF) {
    if (ch != remove_char)
        fputc(ch, dest);
}


/*
5.11
How can we use the putchar ( ) function to output multichar­acter
strings?
*/

char str[] = "Hello";
int i = 0;
while (str[i] != '\0') {
    putchar(str[i++]);
}

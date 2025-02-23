/*
5.10
How can we use the getchar ( ) function to read multicharac­ter
strings?
*/
char str[10];
int i = 0;
char ch;
while ((ch = getchar()) != '\n' && i < 9) {
    str[i++] = ch;
}
str[i] = '\0';

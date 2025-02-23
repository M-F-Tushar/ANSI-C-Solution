/*

5.4
Write scanf statements to read the following data lists:
(a) 78 B 45
(b) 123 1.23 45A
(c) 15-10-2002
(d) 10 TRUE 20
*/
(a) 78 B 45
int a, c;
char b;
scanf("%d %c %d", &a, &b, &c);

(b) 123 1.23 45A
int a, c;
float b;
char d;
scanf("%d %f %d%c", &a, &b, &c, &d);

(c) 15-10-2002
int day, month, year;
scanf("%d-%d-%d", &day, &month, &year);

(d) 10 TRUE 20
int a, c;
char str[10];
scanf("%d %s %d", &a, str, &c);


/*
5.8
State what (if anything) is wrong with each of the following
output statements:
(a) printf(%d 7.2%f, year, amount);
(b) printf(“%-s, %c”\n, city, code);
(c) printf(“%f, %d, %s, price, count, city);
(d) printf(“%c%d%f\n”, amount, code, year);
*/
(a) printf("%d 7.2%f", year, amount);
Error:

7.2%f is incorrect syntax.
Should be %7.2f for formatting.
Fix:

printf("%d %7.2f", year, amount);
(b) printf("%-s, %c", city, code);
Error:

%s does not accept - for left-justification.
Fix:

printf("%s, %c", city, code);
(c) printf("%f, %d, %s", price, count, city);
Error:

The format specifiers match correctly. No error.
(d) printf("%c%d%f\n", amount, code, year);
Error:

amount is float, but %c expects char.
year is int, but %f expects float.
Fix:

printf("%c %d %f\n", code, year, amount);


/*
5.7
The variables count, price , and city have the following values:
count <—— 1275
price <—— –235.74
city <—— Cambridge
Show the exact output that the following output statements will produce:
(a) printf(“%d %f”, count, price);
(b) printf(“%2d\n%f”, count, price);
(c) printf(“%d %f”, price, count);
(d) printf(“%10dxxxx%5.2f”,count, price);
(e) printf(“%s”, city);
(f) printf(%-10d %-15s”, count, city);
*/

(a) printf("%d %f", count, price);
Output:
1275 -235.740000
(%f prints 6 decimal places by default.)

(b) printf("%2d\n%f", count, price);
Output:

1275
-235.740000
(%2d ensures at least 2 digits.)

(c) printf("%d %f", price, count);
⚠️ Error:

price is float, but %d expects int.
count is int, but %f expects float.
Fix:
printf("%d %f", count, price);

(d) printf("%10dxxxx%5.2f", count, price);
Output:
      1275xxxx-235.74
%10d → Right-justified with 10 spaces.
%5.2f → 5 characters total, 2 decimal places.
(e) printf("%s", city);
Output:
Cambridge

Just prints the string.

(f) printf("%-10d %-15s", count, city);
Output:
1275       Cambridge

%-10d → Left-justified in a 10-character field.
%-15s → Left-justified string in a 15-character field.

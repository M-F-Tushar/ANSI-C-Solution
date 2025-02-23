/*
5.5
State the outputs produced by the following printf statements.
(a) printf (“%d%c%f”, 10, ‘x’, 1.23);
(b) printf (“%2d %c %4.2f”, 1234,, ‘x’, 1.23);
(c) printf (“%d\t%4.2f”, 1234, 456);
(d) printf (“\”%08.2f\””, 123.4);
(e) printf (“%d%d %d”, 10, 20);
*/
(a) printf("%d%c%o%f", 10, 'x', 1.23);
⚠️ Error – Missing argument for %o.

(b) printf("%2d %c %4.2f", 1234, 'x', 1.23);
Output:
1234 x 1.23

(c) printf("%d\t%4.2f", 1234, 456);
Output
1234    456.00

(d) printf("%”%08.2f”", 123.4);
⚠️ Error – Incorrect syntax (%08.2f should be inside normal quotes).

(e) printf("%d%d %d", 10, 20);
⚠️ Error – Missing argument for the third %d.

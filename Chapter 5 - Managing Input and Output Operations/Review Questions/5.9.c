/*
5.9 In response to the input statement
scanf(“%4d%*%d”, &year, &code, &count);
the following data is keyed in:
19883745
What values does the computer assign to the variables year, code , and count ?
*/
If input is 19883745:

Format	Reads
%4d	1988 → year
%*d	3745 (skipped)
&code	Undefined behavior (extra argument)
&count	Undefined behavior
Fix:

scanf("%4d%*d", &year);

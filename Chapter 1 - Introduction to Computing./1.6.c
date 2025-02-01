/*Write an algorithm and draw a flowchart to find out whether a
year is a leap year.

Leap Year Conditions:
A year is a leap year if:
It is divisible by 4 and not divisible by 100, or
It is divisible by 400.
Algorithm:
Start
Input Year.
If Year % 400 == 0 OR (Year % 4 == 0 AND Year % 100 != 0), print "Leap Year".
Otherwise, print "Not a Leap Year".
Stop.
Flowchart:
Start → Input Year → Check conditions:
If (Year % 400 == 0) OR (Year % 4 == 0 AND Year % 100 != 0), print "Leap Year".
Else, print "Not a Leap Year".
Stop.
/*

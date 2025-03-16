6.4 Rewrite each of the following without using compound relations:
(a) if(grade <= 59 && grade >= 50)

if (grade <= 59)
    if (grade >= 50)
        second = second + 1;
(b) if (number > 100 || number < 0)

if (number > 100)
    printf("Out of range");
else if (number < 0)
    printf("Out of range");
(c) if ((M1 > 60 && M2 > 60) || T > 200)

if (M1 > 60)
    if (M2 > 60)
        printf("Admitted");
if (T > 200)
    printf("Admitted");
else
    printf("Not admitted");

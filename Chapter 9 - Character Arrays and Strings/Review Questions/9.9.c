9.9 Assume that s1, s2, and s3 are declared as follows:

char s1[10] = "she", s2[20] = "30", s3[40];
Output of the following statements:
printf("%s", strcpy(s3, s1));
✅ Answer: she

printf("%s", strcat(strcat(strcpy(s3, s1), "er"), s2));
✅ Answer: sheer30

printf("%d%d", strlen(s2), strlen(s3));
✅ Answer: 2306

strlen(s2) = 2 (30)

strlen(s3) = 6 (sheer30)

9.13 What will be the output of the following code?

char s1[] = "ANIL KUMAR GUPTA";
char s2[] = "KUMAR";
printf("%s", strstr(s1, s2));
✅ Answer: KUMAR GUPTA

strstr(s1, s2) returns the pointer to the first occurrence of "KUMAR" in s1.



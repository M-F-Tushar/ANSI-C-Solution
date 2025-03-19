8.6 Output of the following program:

main()
{
   char string[] = "HELLO WORLD";
   int m;

   for (m = 0; string[m] != '\0'; m++)
      if ((m % 2) == 0)
         printf("%c", string[m]);
}
👉 Output:
Characters at even indices:

H, L, O, W, R, D
✅ Output = "HLOWRD"

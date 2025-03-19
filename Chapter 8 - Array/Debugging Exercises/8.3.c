8.3 Errors in the following program segments:
(a) for (i=1; i<=5; i++)
✅ i should start at 0 since array indexing in C starts from 0.
👉 Correction:

for (i = 0; i < 5; i++)
(b) for (i=1; i<=5; i++)
✅ Same error – array indexing starts at 0.

(c) B[i] = B[j] + i;
✅ j is not defined within the loop.

(d) for (i=4; j>=0; i--)
✅ i should decrement, but j is undefined.
👉 Correction:

for (i = 4; i >= 0; i--)

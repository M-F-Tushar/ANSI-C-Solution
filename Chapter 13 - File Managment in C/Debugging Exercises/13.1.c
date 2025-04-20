DEBUGGING EXERCISES
13.1 Find error, if any, in the following statements:
FILE fptr;
fptr = fopen (“data”, “a+”);

✅ Given Code:

FILE fptr;
fptr = fopen("data", "a+");
❌ What’s wrong?
The declaration of fptr is incorrect.



FILE fptr;
This creates a FILE structure, not a pointer to a file.

The function fopen() returns a pointer to FILE, not a FILE directly.

So when you write:

c
Copy code
fptr = fopen("data", "a+");
You're trying to assign a FILE* to a FILE, which is invalid.

✅ Correct Version:


FILE *fptr;
fptr = fopen("data", "a+");
🔍 Explanation:
FILE *fptr; declares a file pointer, which is what fopen() returns.

"a+" mode opens the file for both reading and appending.

💡 Tip:
Always check if the file opened successfully:


if (fptr == NULL) {
    printf("Error opening file!\n");
    exit(1);
}



11.6 Given the following declaration
c
Copy
Edit
typedef struct abc {
    char x;
    int y;
    float z[10];
} ABC;
State which of the following declarations are invalid and why:
(a) struct abc v 1;
❌ Invalid

struct abc is correct, but v 1; is invalid syntax (variable names cannot contain spaces or start with a number).

Correct:

c
Copy
Edit
struct abc v1;
(b) struct abc v 2[10];
❌ Invalid

The same issue as (a). Variable names cannot contain spaces or numbers at the beginning.

Correct:

c
Copy
Edit
struct abc v2[10];
(c) struct ABC v 3;
❌ Invalid

ABC is a typedef alias, so struct ABC is incorrect. ABC should be used directly.

Correct:

c
Copy
Edit
ABC v3;
(d) ABC a, b, c;
✅ Valid

Since ABC is a typedef, this is a correct declaration of multiple structure variables.

(e) ABC a[10];
✅ Valid

Declares an array of 10 ABC structure variables.


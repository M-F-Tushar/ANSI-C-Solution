
11.8 Explain the meaning and purpose of the following:
(a) Template
C does not support templates directly (they are a feature of C++).

In C, macros or typedef can sometimes achieve similar results.

(b) struct keyword
Defines a structure, a user-defined data type:

c
Copy
Edit
struct Point {
    int x, y;
};
(c) typedef keyword
Used to define an alias for a data type:

c
Copy
Edit
typedef struct {
    int x, y;
} Point;
(d) sizeof operator
Returns the size (in bytes) of a data type or variable:

c
Copy
Edit
printf("%lu", sizeof(int)); // Outputs 4 (usually)
(e) Tag name
The name given to a struct definition (e.g., struct Student → Student is the tag name).


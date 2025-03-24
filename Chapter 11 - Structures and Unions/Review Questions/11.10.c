
11.10 When do we use the following?
(a) Unions
When memory optimization is required.

Example:

c
Copy
Edit
union Data {
    int i;
    float f;
};
sizeof(Data) is not sizeof(int) + sizeof(float); it takes the largest member’s size.

(b) Bit fields
Used to store compact values in a structure.

Example:

c
Copy
Edit
struct Flags {
    unsigned int is_ready : 1;
    unsigned int is_valid : 1;
};
(c) sizeof operator
Used to determine the size of a data type or structure.

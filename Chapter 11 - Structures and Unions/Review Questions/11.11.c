11.11 Define and give examples for the following terms
(a) Array of structures
Stores multiple structures in an array:

c
Copy
Edit
struct Student {
    int id;
    float marks;
};
struct Student students[10];
(b) Nested structures
One structure inside another:

c
Copy
Edit
struct Address {
    char city[20];
    int zip;
};

struct Person {
    char name[50];
    struct Address addr;
};
(c) Unions
Memory-efficient structure where all members share the same memory space.



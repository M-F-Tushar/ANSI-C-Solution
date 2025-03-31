
11.1 State whether the following statements are true or false
Let's analyze each statement:

(a) A struct type in C is a built-in data type.
❌ False

struct is not a built-in data type; it is a user-defined data type.

Example:

c
Copy
Edit
struct Student {
    int id;
    float marks;
};
(b) The tag name of a structure is optional.
✅ True

A structure can be declared without a tag name:

c
Copy
Edit
struct {
    int id;
    float marks;
} s1;
(c) Structures may contain members of only one data type.
❌ False

Structures can have multiple data types:

c
Copy
Edit
struct Student {
    int id;
    float marks;
    char name[20];
};
(d) The keyword typedef is used to define a new data type.
✅ True

typedef creates an alias for a data type:

c
Copy
Edit
typedef struct {
    int id;
    float marks;
} Student;
(e) A structure variable is used to declare a data type containing multiple fields.
✅ True

Structures hold multiple fields:

c
Copy
Edit
struct Book {
    char title[50];
    float price;
};
(f) It is legal to copy a content of a structure variable to another structure variable of the same type.
✅ True

Example:

c
Copy
Edit
struct Point {
    int x, y;
};

struct Point p1 = {10, 20}, p2;
p2 = p1; // Valid
(g) Pointers can be used to access the members of structure variables.
✅ True

Example:

c
Copy
Edit
struct Point p = {10, 20};
struct Point *ptr = &p;
printf("%d", ptr->x);
(h) In accessing a member of a structure using a pointer p, the two ways are equivalent: (*p).member_name and p -> member_name.
✅ True

Both dereference and arrow notation are valid:

c
Copy
Edit
printf("%d", (*ptr).x);
printf("%d", ptr->x);
(i) We can perform mathematical operations on structure variables that contain only numeric type members.
❌ False

You cannot perform arithmetic directly on structure variables.

(j) An array cannot be used as a member of a structure. ❌ False
✅ Explanation:

Arrays can be members of a structure in C.

Example:

c
Copy
Edit
struct Student {
    char name[50];  // Array inside structure
    int marks[5];   // Array inside structure
};
Corrected Statement: An array can be used as a member of a structure.

(k) A member in a structure can itself be a structure. ✅ True
✅ Explanation:

A structure can have another structure as a member.

This is called nested structures.

Example:

c
Copy
Edit
struct Address {
    char city[20];
    int pincode;
};

struct Person {
    char name[50];
    struct Address addr;  // Nested structure
};
Correct Statement: A structure can have another structure as a member.

(l) Structures are always passed to functions by pointers. ❌ False
✅ Explanation:

Structures can be passed by value or by pointer.

Passing by value:

c
Copy
Edit
void display(struct Student s) { ... }
Passing by pointer:

c
Copy
Edit
void display(struct Student *s) { ... }
Corrected Statement: Structures can be passed by value or by pointer.

(m) A union may be initialized in the same way a structure is initialized. ❌ False
✅ Explanation:

Structures allow initializing multiple members at once:

c
Copy
Edit
struct Point {
    int x, y;
} p = {10, 20};  // ✅ Valid initialization
Unions can only initialize one member at a time:

c
Copy
Edit
union Data {
    int x;
    float y;
} d = {10};  // ✅ Valid (only first member)
Corrected Statement: A union cannot be initialized like a structure (only the first member can be initialized).

(n) A union can have another union as one of the members. ✅ True
✅ Explanation:

A union can contain another union.

Example:

c
Copy
Edit
union Inner {
    int x;
    float y;
};

union Outer {
    union Inner inner;  // Union inside union
    char ch;
};
Correct Statement: A union can have another union as a member.

(o) A structure cannot have a union as one of its members. ❌ False
✅ Explanation:

A structure can contain a union as a member.

Example:

c
Copy
Edit
union Data {
    int i;
    float f;
};

struct Container {
    int id;
    union Data data;  // Union inside structure
};
Corrected Statement: A structure can have a union as a member.



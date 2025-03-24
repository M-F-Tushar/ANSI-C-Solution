11.1 Which of the following is the correct way of accessing the members of a structure variable?
Concept:
In C, structure members can be accessed using:

Dot notation (.) – When dealing with structure variables.

Indirection notation ((*ptr).x) – When using structure pointers.

Arrow notation (ptr->x) – A shorthand for accessing members via pointers.

Example:

#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s1 = {101, 95.5};   // Structure variable
    struct Student *ptr = &s1;         // Pointer to structure

    printf("ID: %d\n", s1.id);        // Using dot notation
    printf("Marks: %.2f\n", (*ptr).marks); // Using indirection notation
    printf("Marks: %.2f\n", ptr->marks);   // Using arrow notation

    return 0;
}
Correct Answer:
✅ (d) All of the above

11.2 Which of the following is true about structures and functions?
Concept:
A structure pointer can be passed as a function argument.

Functions can return a structure variable.

Actual and formal parameters of structures must be of the same type.

Example:

#include <stdio.h>

struct Student {
    int id;
    float marks;
};

// Function accepting structure pointer
void display(struct Student *s) {
    printf("ID: %d, Marks: %.2f\n", s->id, s->marks);
}

// Function returning structure
struct Student getStudent() {
    struct Student s = {102, 88.5};
    return s;
}

int main() {
    struct Student s1 = {101, 90.0};
    display(&s1);  // Passing structure pointer

    struct Student s2 = getStudent(); // Returning structure
    printf("New Student - ID: %d, Marks: %.2f\n", s2.id, s2.marks);

    return 0;
}
Correct Answer:
✅ (d) All of the above

11.3 Which of the following is incorrect about Union?
Concept:
A union’s size is equal to the size of its largest member.

Only one member can store data at a time.

Unions do not support nesting (like structures).

Unlike structures, unions must be initialized with the same type as the first union member.

Example:

#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;
    d.i = 10;  // Now, 'i' holds 10
    printf("i: %d\n", d.i);

    d.f = 5.5; // Overwrites 'i'
    printf("f: %.1f\n", d.f);

    return 0;
}
Incorrect Statement:
✅ (c) Unlike structures, union does not support nesting.
Unions can be nested, but it's rare due to memory constraints.

11.4 Which of the following operators can be used with structure variables?
Concept:
Assignment (=): Structures can be assigned to each other if they are of the same type.

Comparison (==, !=): Not directly allowed.

Arithmetic (+, -, etc.): Not allowed.

Example:
c
Copy
Edit
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {10, 20}, p2;

    p2 = p1;  // ✅ Allowed (assignment)

    // if (p1 == p2) {}  ❌ Not allowed
    // if (p1 != p2) {}  ❌ Not allowed

    printf("p2: %d, %d\n", p2.x, p2.y);
    return 0;
}
Correct Answer:
✅ (a) = (Assignment is allowed, other operators are not)

11.5 What will be the output of the following code?
c
Copy
Edit
void main() {
    union U {
        int i;
        int j;
    };

    union U test = {5};
    printf("%d %d", test.i, test.j);
}
Concept:
In a union, all members share the same memory location.

Since test.i = 5, test.j also refers to the same memory location.

The second value may contain garbage if accessed incorrectly.

Output:
Option (b) 5, garbage value is correct.

✅ Correct Answer: (b) 5, garbage value




11.15 Describe three ways to pass structures as function arguments
Pass by value:

c
Copy
Edit
void display(struct Point p);
Pass by reference (pointer):

c
Copy
Edit
void display(struct Point *p);
Using typedef for readability:

c
Copy
Edit
typedef struct { int x, y; } Point;
void display(Point p);

1.12 Describe different ways of assigning values to structure members
Direct Assignment

c
Copy
Edit
struct Point p;
p.x = 10;
p.y = 20;
Designated Initializers (C99)

c
Copy
Edit
struct Point p = {.x = 10, .y = 20};

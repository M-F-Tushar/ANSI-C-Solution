
11.3 What is a Self-Referential Structure?
A structure that contains a pointer to itself.

Example:

Edit
struct Node {
    int data;
    struct Node *next;
};
Used in linked lists, trees, and graphs.

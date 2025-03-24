
11.9 Explain what is wrong in the following structure declaration:
c
Copy
Edit
struct {
    int number;
    float price;
};
main() { .... }
❌ Incorrect

The structure lacks a tag name or a typedef alias.

It should be:

c
Copy
Edit
struct Item {
    int number;
    float price;
};

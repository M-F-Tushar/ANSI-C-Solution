11.7 How does a structure differ from an array?
Aspect	Structure	Array
Definition	A collection of variables (members) of different data types grouped under one name.	A collection of variables of the same data type.
Memory Storage	Members are stored in contiguous memory, but with possible padding for alignment.	All elements are stored in contiguous memory.
Access	Members accessed using . or ->.	Elements accessed using index [ ].
Usage	Used for grouping related but different types of data.	Used for storing multiple values of the same type.
Example:

c
Copy
Edit
struct Student {
    int id;
    float marks;
}; // Structure

int marks[5]; // Array

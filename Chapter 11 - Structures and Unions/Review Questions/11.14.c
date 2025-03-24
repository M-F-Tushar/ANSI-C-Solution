
11.14 What is a ‘slack byte’?
Extra padding bytes added for alignment.

Example:

c
Copy
Edit
struct Test {
    char a;  // 1 byte
    int b;   // 4 bytes (3 bytes padding before this)
}; // Size: 8 bytes instead of 5

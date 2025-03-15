**Interview Questions Solutions**

**5.1 How will you print the % character on the output screen?**
To print a percentage sign (%) in C, use `%%` inside `printf`:
```c
printf("%%");
```
This outputs `%`.

---

**5.2 What will be the output of the following code?**
```c
#define char int
void main() {
    char i;
    printf("%d", sizeof(i));
}
```
**Explanation:**
- `#define char int` replaces `char` with `int`, so `char i;` is actually `int i;`
- `sizeof(i)` gives the size of an integer, typically **4 bytes**.

**Output:** `4`

---

**5.3 Will the following statement compile successfully?**
```c
printf("%d", printf("Hello"));
```
**Explanation:**
- `printf("Hello")` prints `Hello` and returns the number of characters printed (`5`).
- `printf("%d", 5);` prints `5`.
- **Final output:** `Hello5`

**Yes, it will compile successfully.**

---

**5.4 Can a C program run without including a header file?**
Yes, a C program **can compile and run** without including `#include <stdio.h>`, but only if:
- No standard library functions (like `printf`) are used.
- The compiler allows implicit function declaration (which is discouraged in modern C standards).

However, **it is highly recommended to include necessary headers.**

---

**5.5 What will be the output of the following statement?**
```c
printf("%d");
```
**Explanation:**
- `printf("%d");` expects an integer argument, but none is provided.
- **Undefined behavior** occurs, possibly leading to a runtime error.

---

**5.6 What will be the output of the following code?**
```c
#define rate 10
void main() {
    #define rate 20
    printf("rate = %d", rate);
}
```
**Explanation:**
- The second `#define rate 20` inside `main()` is invalid because macro definitions cannot be redefined inside a function.
- This will likely cause a **compilation error**.



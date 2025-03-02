Determine the output of the following program.
c
Copy
Edit
int prod( int m, int n);

int main() {
    int x = 10;
    int y = 20;
    int p, q;
    p = prod(x, y);
    q = prod(p, prod(x, y));
    printf("%d %d\n", p, q);
}

int prod( int a, int b) {
    return (a * b);
}
✅ Step-by-step execution:

p = prod(x, y) → prod(10, 20) → 10 * 20 = 200

p = 200
q = prod(p, prod(x, y)) → prod(200, prod(10, 20))

prod(10, 20) = 200
prod(200, 200) = 40000
q = 40000
✅ Final Output:

plaintext
Copy
Edit
200 40000

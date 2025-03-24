
11.18 Predict the output of the following union program
c
Copy
Edit
main() {
    union x {
        int a;
        float b;
        double c;
    };

    printf("%lu\n", sizeof(x));
    x.a = 10;
    printf("%d %f %lf\n", x.a, x.b, x.c);
    x.c = 1.23;
    printf("%d %f %lf\n", x.a, x.b, x.c);
}
Output (assuming 8-byte double):
mathematica
Copy
Edit
8
10 0.000000 0.000000
Random Random 1.230000
Explanation: Assigning x.c overwrites x.a and x.b because all members share the same memory.


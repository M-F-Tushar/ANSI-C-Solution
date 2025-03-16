
Problem 6.13
Code:
c
main() {
    int m, n, p;
    for (m = 0; m < 3; m++)
        for (n = 0; n < 3; n++)
            for (p = 0; p < 3; p++)
                if (m + n + p == 2)
                    goto print;
    print:
    printf("%d, %d, %d", m, n, p);
}
Step-by-Step Execution:
Triple for loops iterate over
𝑚,𝑛, and 𝑝 from 0 to 2:
    First, m=0,𝑛=0,𝑝=2. The condition 𝑚+𝑛+𝑝=0+0+2
=
2is true.

The goto statement jumps to the print label, exiting the loops.

At the label print:,
𝑚=0,𝑛=0,𝑝=2
 are printed:

Print: 0, 0, 2.

Output:
0, 0, 2

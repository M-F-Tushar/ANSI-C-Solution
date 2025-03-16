Problem 6.12
Code:
main() {
    int m;
    for (m = 1; m <= 5; m++)
        printf("%d\n", (m % 2) ? m : m % 2);
}
Step-by-Step Execution:
Initialize
𝑚=1. 𝑚<=5:
𝑚=1: 𝑚%2=1
 (odd). Print: 1.

𝑚=2:𝑚%2=0
 (even). Print: 0.
𝑚=3: %2=1
 (odd). Print: 3.
𝑚=4:𝑚2=0
 (even). Print: 0.

𝑚=5: 𝑚%2=1
 (odd). Print: 5.

 Output:

1
0
3
0
5

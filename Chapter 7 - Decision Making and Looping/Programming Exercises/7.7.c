7.7 Rewrite 7.4 using else...if Instead of continue
Solution (Modified 7.4 without continue)

#include <stdio.h>
#include <math.h>

int main() {
    double P, r, V;
    int n;

    printf("P\t r\t n\t V\n");
    for (P = 1000; P <= 10000; P += 1000) {
        for (r = 0.10; r <= 0.20; r += 0.01) {
            for (n = 1; n <= 10; n++) {
                if (P >= 1000 && P <= 10000) {
                    if (r >= 0.10 && r <= 0.20) {
                        if (n >= 1 && n <= 10) {
                            V = P * pow(1 + r, n);
                            printf("%.0f\t %.2f\t %d\t %.2f\n", P, r, n, V);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
Explanation
Uses else if instead of continue for filtering conditions.
Ensures only valid P, r, and n values are processed.


7.14 Graph y = sin(x) from 0 to 180 degrees in steps of 15 degrees
Algorithm:

Convert degrees to radians.
Compute sin(x).
Print values in a tabular format.
C Program:

c
Copy code
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    printf("Angle (deg)   sin(x)\n");
    for (int angle = 0; angle <= 180; angle += 15) {
        double radians = angle * PI / 180.0;
        printf("%3d          %lf\n", angle, sin(radians));
    }
    return 0;
}

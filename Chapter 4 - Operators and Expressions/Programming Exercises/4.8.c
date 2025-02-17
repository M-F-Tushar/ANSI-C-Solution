/*For a certain electrical circuit with an inductance L and resistance
R, the damped natural frequency is given by

    Frequency = sqrt 1/LC - R sqar/4C sqar

It is desired to study the variation of this frequency with C
(capacitance). Write a program to calculate the frequency for
different values of C starting from 0.01 to 0.1 in steps of 0.01.*/
#include <stdio.h>
#include <math.h>

int main() {
    double L = 1.0, R = 0.5, C, frequency;

    printf("Capacitance (C)  Frequency\n");
    for (C = 0.01; C <= 0.1; C += 0.01) {
        frequency = sqrt((1 / (L * C)) - ((R * R) / (4 * C * C)));
        printf("%.2f%.4f\n", C, frequency);
    }

    return 0;
}

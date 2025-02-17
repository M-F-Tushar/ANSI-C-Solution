/*The total distance travelled by a vehicle in t seconds is given by
distance = ut + ( at2)/2
Where u is the initial velocity (metres per second), a is the
acceleration (metres per second 2). Write a program to evaluate
the distance travelled at regular intervals of time, given the values
of u and a . The program should provide the flexibility to the user
to select his own time intervals and repeat the calculations for
different values of u and a .*/

#include <stdio.h>

int main() {
    float u, a, dt, totalTime, time = 0, distance;

    // Input values
    printf("Enter Initial Velocity (u): ");
    scanf("%f", &u);
    printf("Enter Acceleration (a): ");
    scanf("%f", &a);
    printf("Enter Time Interval (dt): ");
    scanf("%f", &dt);
    printf("Enter Total Time (T): ");
    scanf("%f", &totalTime);

    // Loop to calculate distance at intervals
    while (time <= totalTime) {
        distance = u * time + 0.5 * a * time * time;
        printf("At time %.2f seconds, Distance = %.2f meters\n", time, distance);
        time += dt; // Increment time
    }

    return 0;
}

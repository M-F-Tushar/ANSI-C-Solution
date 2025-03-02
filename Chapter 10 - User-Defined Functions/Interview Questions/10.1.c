//Is it possible to execute certain instructions after the main function has ended?
//yes by using atexit() in c
#include <stdio.h>
#include <stdlib.h>

void goodbye() {
    printf("Program is exiting. Goodbye!\n");
}

int main() {
    atexit(goodbye);
    printf("Hello from main!\n");
    return 0;
}

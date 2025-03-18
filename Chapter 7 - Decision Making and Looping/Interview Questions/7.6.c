7.6 What is the purpose of the exit() statement?
The exit() function terminates a program immediately.

Example:

#include <stdlib.h>
int main() {
    printf("This will print.\n");
    exit(0);
    printf("This will NOT print.\n");
}

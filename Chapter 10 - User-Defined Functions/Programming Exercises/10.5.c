/*
The Fibonacci numbers are defined recursively as follows:
    F1=1,F2=1,Fn=Fn−1+Fn−2,n>2
Write a function that will generate and print the first n Fibonacci
numbers. Test the function for n = 5, 10, and 15.
*/
#include <stdio.h>

// Recursive function for Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Number of terms
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

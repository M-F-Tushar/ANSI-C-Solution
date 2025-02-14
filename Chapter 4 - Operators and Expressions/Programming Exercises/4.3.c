/*
Given an integer number, write a program that displays the
number as follows:
First line : all digits
Second line : all except first digit
Third line : all except first two digits
…….
Last line : The last digit
For example, the number 5678 will be displayed as:
5 6 7 8
6 7 8
7 8
8
*/
#include <stdio.h>

int main() {
    int num, temp;

    // Input the integer number
    printf("Enter an integer number: ");
    scanf("%d", &num);

    temp = num;

    // Print the digits progressively
    while (temp > 0) {
        printf("%d\n", temp);
        temp /= 10; // Remove the last digit
    }

    return 0;
}

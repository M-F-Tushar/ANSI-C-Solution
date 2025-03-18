7.1 Reverse the Digits of a Number using while Loop
Problem: Given a number, reverse its digits.
Example:
Input: 12345
Output: 54321

Solution

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;  // Extract last digit
        reversedNum = reversedNum * 10 + remainder;  // Append digit to reversedNum
        num /= 10;  // Remove last digit
    }

    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
Explanation
Extract the last digit using % 10.
Multiply reversedNum by 10 and add extracted digit.
Remove the last digit using / 10.
Repeat until the number becomes 0.


7.2 Compute Sum of Digits of an Integer
Problem: Find the sum of digits of a given number.
Example:
Input: 12345
Output: 1 + 2 + 3 + 4 + 5 = 15

Solution
c
Copy
Edit
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  // Extract last digit
        sum += digit;  // Add to sum
        num /= 10;  // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
Explanation
Extract each digit using % 10.
Add it to sum.
Remove the last digit using / 10.
Repeat until the number becomes 0.

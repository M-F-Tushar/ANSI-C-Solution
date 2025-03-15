// Programming Exercise 5.5
// Read two-digit integers and display multiplication result

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two two-digit numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    return 0;
}


Question 6.4: What will be the output of the code?
c
void main() {
    int a = 5;
    if (a < 0);
    printf("a is negative");
    else
    printf("a is positive");
}
Explanation:

The if (a < 0); ends with a semicolon, making it a null statement.

The else is not associated with the if due to the null statement. Therefore, the compiler will throw an error because the else has no matching if.

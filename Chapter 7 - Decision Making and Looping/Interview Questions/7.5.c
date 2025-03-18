
7.5 What will be the output of this code?

i = 0;
while (i++ < 5) {
    if (i == 1)
        printf("Zero\n");
    else
        printf("Hello World\n");
}
Execution:

i++ < 5 runs while i = 0 to 4.
First iteration: i = 1, prints "Zero".
Next 4 iterations: i = 2 to 5, prints "Hello World".
Output:

Zero
Hello World
Hello World
Hello World
Hello World

Problem 6.11
Code:
c
main() {
    int m = 1;
    if (m = 1) {
        printf("Delhi");
        if (m == 2)
            printf("Chennai");
        else
            printf("Bangalore");
    }
    else;
    printf("END");
}
Step-by-Step Execution:
Variable
𝑚
 is initialized to
1
.

if (m = 1) assigns 1 to
𝑚
 (note the single =). The condition evaluates as true because
𝑚
 is now
1
.

Print: Delhi.

Enter the next if block: if (m == 2). Since
𝑚
=
1
, this condition is false, so the else block executes:

Print: Bangalore.

Outside the if-else block, printf("END") executes:

Print: END.

Output:
DelhiBangaloreEND

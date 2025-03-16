
Problem 6.9
Given Values:
Initially:
𝑥=2, 𝑦=1, 𝑧=0.

(a) Code:
switch (x) {
    case 2:
        x = 1;
        y = y + 1;
    case 1:
        x = 0;
        break;
    default:
        x = 1;
        y = 0;
}
Step-by-Step Execution:
Since
𝑥=2, case 2 is executed:𝑥=1.𝑦= 𝑦+1=1+1=2.

Fall-through occurs (no break), so case 1 executes next:

𝑥=0
.

break stops further execution.

Default case is skipped (not executed).

Final Values:
𝑥=0, 𝑦=2, 𝑧=0
 (unchanged).

(b) Code:

switch (y) {
    case 0:
        x = 0;
        y = 0;
    case 2:
        x = 2;
        z = 2;
    default:
        x = 1;
        y = 2;
}
Step-by-Step Execution:
Since
𝑦=1, none of the cases match exactly. So, the default case executes:

𝑥=1.

𝑦=2.

No further execution happens since the default case executes.

Final Values:
𝑥=1, 𝑦=2, 𝑧=0
 (unchanged).

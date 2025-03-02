What will be the effect on function calls if we change the header line as follows?
(a) int divide (int x, int y);
✅ Effect:

Integer division will occur instead of floating-point division.
Results will be truncated to integers.
Function Call	Output (Before)	Output (After)
divide(9, 2)	4.5	4 (integer truncation)
(b) double divide (float x, float y);
✅ Effect:

The return type is changed to double, providing higher precision results.
Function Call	Output (Before)	Output (After)
divide(2.0, 3.0)	0.66667	More precise result (depends on double precision)


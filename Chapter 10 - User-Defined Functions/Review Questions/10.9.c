Which of the following header lines are invalid? Why?
Header Line	Valid/Invalid	Reason
(a) float average (float x, float z);	✅ Valid	Correct syntax
(b) double power (double a, int n - 1);	❌ Invalid	int n - 1 is not a valid parameter
(c) int product (int m, 10);	❌ Invalid	Cannot pass constant 10 in declaration
(d) double minimum (double x; double y);	❌ Invalid	Semicolon ; should be a comma ,
(e) int mul (int x, y);	❌ Invalid	Missing type for y
(f) exchange (int *a, int *b);	❌ Invalid	Return type missing
(g) void sum (int a, int b, int &c);	❌ Invalid	C does not use & for references


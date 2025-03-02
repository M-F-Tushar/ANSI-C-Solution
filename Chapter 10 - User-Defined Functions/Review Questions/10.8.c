Which of the following prototype declarations are invalid? Why?
Prototype	Valid/Invalid	Reason
(a) int (fun) void;	❌ Invalid	Syntax error, should be int fun(void);
(b) double fun (void);	✅ Valid	Correct declaration
(c) float fun (x, y, n);	❌ Invalid	Data types missing for x, y, n
(d) void fun (void, void);	❌ Invalid	Void cannot be a parameter
(e) int fun (int a, b);	❌ Invalid	Data type missing for b
(f) fun (int, float, char);	❌ Invalid	Return type missing
(g) void fun (int a, int &b);	❌ Invalid	C does not use & for pass-by-reference


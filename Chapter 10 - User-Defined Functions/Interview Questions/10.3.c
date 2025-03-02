/*
What is the difference between ‘call by value’ and ‘call by
reference’?
Call by Value: A copy of the argument is passed; the original value is unchanged.
Call by Reference: A pointer to the original data is passed; modifications reflect in the caller.
*/
void callByReference(int *x) { *x = 20; }
void callByValue(int x) { x = 20; }

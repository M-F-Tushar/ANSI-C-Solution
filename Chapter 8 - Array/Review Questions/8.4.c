8.4 Correct array declarations:
We want to declare a two-dimensional integer type array matrix for 3 rows and 5 columns.

Declaration	            Correct or Incorrect	Reason
int matrix[3][5];	    ✅ Correct	            Proper two-dimensional declaration
int matrix[5][3];	    ✅ Correct	            Valid two-dimensional array
int matrix[1+2][2+3];	✅ Correct	            The compiler evaluates expressions at compile time
int matrix[3,5];	    ❌ Incorrect	            Incorrect syntax for declaring multidimensional arrays
int matrix[3][5];	    ✅ Correct	            Valid syntax

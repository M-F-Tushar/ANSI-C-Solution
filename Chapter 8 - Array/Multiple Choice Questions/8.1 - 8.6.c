8.1 How many integer values can the array N[5][5] store?
Given:
N[5][5] is a 2D array with 5 rows and 5 columns.
Calculation:

Total elements=Rows×Columns=5×5=25
Correct Answer:
✅ (b) 25

8.2 What index value should be used to access the last element of the integer array N[10]?
Given:
N[10] is a 1D array with 10 elements.
Array indexing starts from 0.
Last element index:
Last index=Size−1=10−1=9
Correct Answer:
✅ (a) 9

.3 The process of creating a fixed-sized array by allocating memory space at compile time is called __________.
Explanation:
When an array is declared at compile time, memory is allocated before program execution.
This is known as Static Memory Allocation.
Correct Answer:
✅ (a) Static memory allocation

8.4 What will be the output of the following statement?

int N[3] = {1, 2, 3};
printf("%d", N[3]);
Explanation:
N[3] is out of bounds because the valid indices are 0, 1, and 2.
Accessing an invalid index results in garbage value or undefined behavior.
Correct Answer:
✅ (d) Garbage value

8.5 It is required to store the names of five students. Which of the following array declarations can be used for this?
Explanation:
Each student's name is a string (character array).
A 2D character array is required.
The correct format is char array[row][column], where:
Row = Number of students (5).
Column = Maximum length of a name (including \0 null character).
Correct Declaration:
✅ (c) char student[5][30];
(5 students, each name can have up to 29 characters + 1 null character.)

8.6 What will be the output of the following statement?
c
Copy code
int ARR[5][20];
printf("%d", sizeof(ARR));
Explanation:
ARR[5][20] is a 2D integer array.
Size of int = 4 bytes.
Total elements = 5×20=100.
Total size = 100×4=400 bytes.
Correct Answer:
✅ (c) 400

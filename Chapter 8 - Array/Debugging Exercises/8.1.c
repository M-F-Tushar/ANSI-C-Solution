8.1 Identify errors in the following array declaration statements:
Code	                            Error	                                    Correction
(a) int score (100);	            Syntax error – () used instead of []	    int score[100];
(b) float values [10,15];	        Wrong syntax for array declaration	        float values[10][15];
(c) char name[15];	                ✅ No error	                                ✅ Correct
(d) float average[ROW],[COLUMN];	Wrong syntax for 2D array declaration	    float average[ROW][COLUMN];
(e) double salary[i + ROW]	        Cannot use expressions in size declaration	double salary[ROW];
(f) long int number[ROW]	        ✅ No error (if ROW is a constant)	        ✅ Correct
(g) int sum[ ];	                    Size must be specified	                    int sum[10];
(h) int array x[COLUMN];	        Wrong syntax	                            int x[COLUMN];

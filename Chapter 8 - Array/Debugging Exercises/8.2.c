8.2 Identify errors in the following initialization statements:
Code	                                    Error	                            Correction
(a) int number[ ] = {0,0,0,0,0,0};	        Size missing	                    int number[6] = {0,0,0,0,0,0};
(b) float item[3][2] = {0,1,2,3,4,5};	    Incorrect grouping for 2D array	    { {0,1}, {2,3}, {4,5} }
(c) char word[ ] = {'A','R','R','A','Y'};	✅ No error	                        ✅ Correct
(d) int m[2][4] = {{0,0,0,0},{1,1,1,1}};	✅ No error	                        ✅ Correct
(e) float result[10] = 0;	                Wrong initialization	            float result[10] = {0};

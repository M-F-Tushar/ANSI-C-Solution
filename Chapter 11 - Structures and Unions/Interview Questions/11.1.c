11.1 Difference Between Structure and Union in Terms of Object Size
Feature	            Structure	                                    Union
Memory Allocation	Allocates memory for all members	            Allocates memory for the largest member
Size	            Sum of all members' sizes	                    Size of the largest member
Example	            struct A { int x; float y; } (Size = 8 bytes)	union B { int x; float y; } (Size = 4 bytes)

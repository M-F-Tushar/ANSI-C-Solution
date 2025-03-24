11.2 Fill in the blanks
Question	                                                                                                                            Answer      Explanation
(a) The name of a structure is referred to as tag.	                                                                                    Tag	        Example: struct Student { ... }; where Student is the tag.
(b) The variables declared in a structure definition are called members.	                                                            Members	    Example: int id; is a member of struct Student.
(c) The typedef keyword can be used to create a synonym for a previously defined data type.                                             typedef	    Example: typedef struct Student S;
(d) The selection operator -> requires the use of a pointer to access the members of a structure.	                                    Pointer	    Example: ptr->id;
(e) A union is a collection of data items under one name in which the items share the same storage.	                                    Union	    Example: union Data { int i; float f; };
(f) In case of partial initialization of a structure variable, the integer and floating point members are initialized to zero value.	Zero	    Example: struct Point p = {5}; // y=0 automatically
(g) In the memory storage of a structure variable, the unoccupied byte is known as padding byte.	                                    Padding	    Example: Compiler adds extra bytes for alignment.
(h) The size of a union variable is equal to the size of its largest member.	                                                        Largest	    Example: union { int i; double d; }; takes sizeof(double).


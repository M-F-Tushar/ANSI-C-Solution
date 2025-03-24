11.3 Structure abc is used to declare variables. Identify incorrect statements.
Assume:

struct abc {
    int x;
    float y;
    char z;
};
Statement	                            Correct/Incorrect	Explanation
(a) struct abc a,b,c;	                ✅ Correct	        Declares 3 structure variables.
(b) struct abc a,b;	                    ✅ Correct	        Declares two variables.
(c) abc x,y,z;	                        ❌ Incorrect	        Needs struct keyword unless typedef is used.
(d) struct abc a[ ];	                ❌ Incorrect	        Array size is missing.
(e) struct abc a = { };	                ✅ Correct	        Initializes all members to zero.
(f) struct abc b = { 1+2, 3.0, "xyz" };	❌ Incorrect	        "xyz" is too long for char.
(g) struct abc c = {4,5.0,6};	        ❌ Incorrect	         6 should be a character (e.g., '6').
(h) struct abc a = { 4, 5.0, "xyz" };	❌ Incorrect	        "xyz" is invalid for a char field.

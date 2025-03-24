11.5 Correct array declaration for struct item_bank
c
Copy
Edit
struct item_bank {
    int number;
    double cost;
};
Statement	                        Correct/Incorrect	Explanation
(a) int item_bank items[10];	    ❌ Incorrect	        item_bank is a structure, not a type.
(b) struct items[10] item_bank;	    ❌ Incorrect     	Wrong syntax.
(c) struct item_bank items (10);	❌ Incorrect	        Parentheses are not valid for array declaration.
(d) struct item_bank items [10];	✅ Correct	        Correct way to declare an array of structures.
(e) struct items item_bank [10];	❌ Incorrect	        items is undefined.
✅ Correct Answer: (d) struct item_bank items [10];

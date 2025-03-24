1.4 Given struct abc a,b,c;, which statements are legal?
Statement	            Correct/Incorrect	Explanation
(a) scanf("%d", &a);	❌ Incorrect	        scanf doesn't work directly with structures.
(b) printf("%d", b);	❌ Incorrect	        printf needs individual members (b.x).
(c) a = b;	            ✅ Correct	        Assignment between same structure types is valid.
(d) a = b + c;	        ❌ Incorrect	        Cannot perform arithmetic on structures.
(e) if (a > b)	        ❌ Incorrect	        Comparison operators don’t work on structures.



6.7 Simplify the following compound logical expressions:
(a) !(x <= 10)

Simplification: (x > 10)
Explanation: The negation of x <= 10 is x > 10 (following the rule of negation).
(b) !(x == 10) || !((y == 5) || (z < 0))

Simplification: (x != 10) || (y != 5) && (z >= 0)
Explanation:
Using De Morgan's Law:
!(A || B) = !A && !B.
So, !((y == 5) || (z < 0)) becomes (y != 5) && (z >= 0).
(c) !( (x + y == z) && !(z > 5) )

Simplification: (x + y != z) || (z > 5)
Explanation:
Using De Morgan's Law:
!(A && B) = !A || !B.
!(x + y == z) is (x + y != z) and !!(z > 5) simplifies to (z > 5).
(d) !( (x <= 5) && (y == 10) && (z < 5) )

Simplification: (x > 5) || (y != 10) || (z >= 5)
Explanation:
Using De Morgan's Law:
!(A && B && C) = !A || !B || !C.

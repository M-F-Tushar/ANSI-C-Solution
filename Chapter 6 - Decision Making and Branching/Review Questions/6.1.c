6.1 State whether the following are true or false:
(a) A switch expression can be of any type.

Answer: False
Explanation: In C, the expression in a switch statement must be an integer or an expression that evaluates to an integer type (like int, char, or enum). Floating-point and other types are not allowed.

(b) A program stops its execution when a break statement is encountered.

True
Explanation: The break statement terminates the loop or switch statement and transfers control to the statement immediately following it.
(c) Each case label can have only one statement.

False
Explanation: A case label in a switch can have multiple statements, not just one.
(d) The default case is required in the switch statement.

False
Explanation: The default case is optional, though recommended for handling unexpected values.
(e) When if statements are nested, the last else gets associated with the nearest if without an else.

True
Explanation: This is known as the "dangling else" problem, where an else pairs with the closest unmatched if.
(f) One if can have more than one else clause.

False
Explanation: An if statement can have only one else clause.
(g) Each expression in the else if must test the same variable.

False
Explanation: The expressions in else if can test different variables or complex conditions.
(h) A switch statement can always be replaced by a series of if-else statements.

True
Explanation: A switch can be rewritten using if-else constructs, although switch is often more efficient.
(i) Any expression can be used for the if expression.

True
Explanation: The condition in an if can be any expression that evaluates to true or false (non-zero is true, zero is false).
(j) The predicate !(x >= 10 || y == 5) is equivalent to (x < 10 && y != 5).

True
Explanation: This follows De Morgan's Laws for negating logical expressions.
(k) It is mandatory to include an else block with an if statement.

False
Explanation: The else block is optional.
(l) The default block can be placed at the beginning of the switch case construct.

True
Explanation: Although it's usually at the end, default can appear anywhere within the switch, but it is recommended to place it at the end for clarity.

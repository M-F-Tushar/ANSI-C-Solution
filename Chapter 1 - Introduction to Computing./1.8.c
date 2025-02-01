/*Write an algorithm and draw a flowchart to find out whether three
points (x1, y1), (x2, y2) and (x3, y3) lie on a straight line


1.8 Algorithm and Flowchart to Check if Three Points Lie on a Straight Line
Formula:
For three points (x1, y1), (x2, y2), (x3, y3) to be collinear, the area of the triangle they form must be zero:


Algorithm:
Start
Input x1, y1, x2, y2, x3, y3.
Compute determinant:

D=x1(y2−y3)+x2(y3−y1)+x3(y1−y2)
If D = 0, print "Points are collinear".
Else, print "Points are not collinear".
Stop.
*/

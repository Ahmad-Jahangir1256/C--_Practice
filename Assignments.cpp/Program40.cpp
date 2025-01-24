/*Question: : Write a complete C++ program with the following features.
i. Declare a structure Point with two integer members x and y.
ii. Define a function getInput(), which accepts a Point by reference. Get user input for a Point in this
function.
iii. Define a function addPoints(), which accepts two Points p1 and p2. The function adds their respective
members, and returns a Point which is the sum of two. For example, if one point is (2,3), the other is
(4,5), the function should return a Point (6,8).
iv. In the main(), declare two variables of type Point. Call the function getInput() twice to get the values
of these Points from user. Add the two Points using the function addPoints() and display the x and y
values of the result returned by the function.  */
#include <iostream>
using namespace std;
struct Point
{
int x;
int y;
};
void getInput(Point &pt)
{
cout << "Enter x and y coordinates: ";
cin >> pt.x >> pt.y;
}
Point addPoints(Point pt1, Point pt2)
{
Point sum;
sum.x = pt1.x + pt2.x;
sum.y = pt1.y + pt2.y;
return sum;
}
int main()
{
Point pt1, pt2;
getInput(pt1);
getInput(pt2);
Point sum = addPoints(pt1, pt2);
cout << "Sum of Points: (" << sum.x << ", " << sum.y << ")" << endl;
return 0;
}
/*Question: Declare a structure Rectangle with two Points as its members, the top left and the
bottom right.
a. Declare a variable of type Rectangle and get user input for the two points.
b. Define a function computeArea() which accepts a Rectangle and returns its area.
c. Display the area of the Rectangle in the main()  */
#include <iostream>
using namespace std;
struct Point
{
int x;
int y;
};
struct Rectangle
{
Point topLeft;
Point bottomRight;
};
void getInput(Point &p)
{
cout << "Enter x and y coordinates: ";
cin >> p.x >> p.y;
}
int computeArea(Rectangle rect)
{
int length = rect.bottomRight.x - rect.topLeft.x;
int width = rect.topLeft.y - rect.bottomRight.y;
return length * width;
}
int main()
{
Rectangle rect;
cout << "Enter coordinates for the top left point of the rectangle: " << endl;
getInput(rect.topLeft);
cout << "Enter coordinates for the bottom right point of the rectangle: " << endl;
getInput(rect.bottomRight);
int area = computeArea(rect);
cout << "Area of the rectangle: " << area << endl;
return 0;
}
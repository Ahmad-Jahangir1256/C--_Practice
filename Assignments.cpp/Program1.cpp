/*Question: Write a program in C++ that accepts the base and height of a right-angle triangle from the
user and displays the area of the triangle. (Hint: Formula for area of right angle triangle =
(base*height)/2).  */
#include <iostream>
using namespace std;
int main()
{
float h, b, area;
cout << "Enter height of triangle =";
cin >> h;
cout <<endl << "Enter base of triangle =";
cin >> b;
area = (b * h) / 2;
cout <<endl << "Area of triangle =" << area;
return 0;
}
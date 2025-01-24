/*Question: Write a program that reads three non-zero integers and determines and prints whether
they could be the sides of a right-angle triangle. (Hint*: Pythagoras Theorem a2 + b2 = c2) So
your program should take three variables a, b and c and check that the sum of square of an and
square of b should be equal to the square of c.*/
#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Enter three Numbers =";
cin >> a >> b >> c;
if (a ==0 || b ==0 || c == 0)
{
cout << "Invalid input" << endl;
}
else
{
if ((c * c) == (a * a) + (b * b))
{
cout << "These are sides of a Right Angle Triangle" << endl;
}
else if ((b * b)==(a * a)+(c * c))
{
cout << "These are sides of a Right Angle Triangle" << endl;
}
else if ((a * a) == (b * b) + (c * c))
{
cout << "These are sides of a Right Angle Triangle" << endl;
}
else
{
cout<<"These are not sides of a Right Angle Triangle" << endl;
}
}
return 0;
}
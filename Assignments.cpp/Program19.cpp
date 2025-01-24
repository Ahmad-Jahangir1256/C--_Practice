/*Question: : Write a program which asks the user to enter the width and height of a rectangle.
Pass these values to a function ‘Area’ to compute the area of the rectangle. Display the area in
the function main  */
#include<iostream>
using namespace std;
void area(int w,int h)
{
int area1;
area1 = w*h;
cout <<"Area = " << area1 <<endl;
}
int main ()
{
int w,h;
cout << "Enter Width of rectangle: "<< endl;
cin >> w;
cout << "Enter Height of rectangle: "<< endl;
cin >>h;
area(w,h);
return 0;
}
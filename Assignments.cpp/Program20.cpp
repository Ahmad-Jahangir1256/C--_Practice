/*Question: Write a function that takes two integer arguments and returns the result of dividing
the first by the second. The program should not attempt the division if the second number is
zero, in this case it should return -1.  */
#include<iostream>
using namespace std;
void division(double num1,double num2)
{
double div;
if (num2==0)
{
cout << endl << "-1" << endl;
}
else
{
div = num1/num2;
cout << "Division of "<< num1 <<" and "<< num2 <<" is "<<div << endl;
}
}
int main ()
{
double num1,num2;
cout << "Enter first number: "<< endl;
cin >> num1;
cout << "Enter second number: "<< endl;
cin >>num2;
division (num1,num2);
return 0;
}
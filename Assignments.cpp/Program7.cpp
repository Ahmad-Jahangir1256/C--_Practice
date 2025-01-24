/*Question: Write a program for a basic calculator. Your calculator should take two integers. Then it
should display options for different operations and then ask the user for choice. Based on the
user’s choice it will perform the operation. The options will be displayed as following:
Press 1 for addition
Press 2 for subtraction
Press 3 for multiplication
Press 4 for division Press
5 for finding the remainder. */
#include <iostream>
using namespace std;
int main()
{
int c;
int a,b,add,sub,prod,mod;
float div;
cout << "Enter two Numbers =";
cin >> a>>b;
cout << "For Addition press 1"<<endl;
cout << "For Subtraction press 2" << endl;
cout << "For Product press 3" << endl;
cout << "For Division press 4" << endl;
cout << "For Modulus press 5" << endl;
cin >> c;
switch (c)
{
case 1:
{
add = a + b;
cout << a << "+" << b << "=" << add;
break;
}
case 2:
{
sub = a - b;
cout << a << "-" << b << "=" << sub;
break;
}
case 3:
{
prod = a * b;
cout << a << "*" << b << "=" << prod;
break;
}
case 4:
{
if (a == 0 && b == 0)
{
cout << "Error" << endl;
}
 div =static_cast<float> (a) / b;
cout << a << "/" << b << "=" << div;
break;
}
case 5:
{
mod = a % b;
cout << a << "%" << b << "=" << mod;
break;
}
default:
{
cout << "Invalid Selection" << endl;
}
}
return 0;
}
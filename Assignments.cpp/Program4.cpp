/*Question: Write a program in C++ that asks the user to enter two integer numbers, stores them in
variable ’num1’ and ’num2’ respectively. The program swaps the values of two variables with each other
using a third variable ’ ’temp’ and displays the values of both variables after swap. */
#include <iostream>
using namespace std;
int main()
{
int num1,num2, temp;
cout << "Enter number 1 =";
cin >> num1;
cout <<endl << "Enter number 2 =";
cin >> num2;
cout <<"before swap number 1=" <<num1 <<" number 2 =" <<num2;
temp=num1;
num1=num2;
num2=temp;
cout <<endl << "After swap number 1=" << num1 << " number 2 =" <<num2;
return 0;
}
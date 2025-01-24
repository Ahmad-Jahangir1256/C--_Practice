/*Question: : Write a program that asks for the number of hours worked by six employees. It
stores the values in an array  */
#include <iostream>
using namespace std;
int main()
{
int work_hours[6];
int x=1;
cout << "Enter work hours of six employees = " << endl;
for (int i = 0; i < 6; i++)
{
cin >> work_hours[i];
cout << "Working hours of " << x << " is = " << work_hours[i] << endl;
x++;
}
return 0;
}
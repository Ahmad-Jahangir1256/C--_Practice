/*Question: : Write a program that asks the user to type 10 integers of an array. The program must
compute and write how many integers are greater than or equal to 10. */
#include <iostream>
using namespace std;
int main()
{
int count;
int num[10];
cout << "Enter 10 numbers = " << endl;
for (int i = 0; i < 10; i++)
{
cin >> num[i];
if (num[i] >= 10)
{
cout << "The number " << num[i] << " is greater than or equal to 10" <<
endl;
count++;
}
else
{
cout << "The number " << num[i] << " is smaller 10" << endl;
}
}
cout << "Total numbers greater than or equal to 10 = " << count << endl;
return 0;
}
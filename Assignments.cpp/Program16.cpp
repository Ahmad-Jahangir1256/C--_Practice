/*Question: Write the program using for loop to extract even number from the range of integers given
from keyboard And then print them on the screen. Your program output should be like:
In put starting integer: 6
Input ending integer: 124
Even numbers are: 6 8 10 12  */
#include <iostream>
using namespace std;
int main()
{
int x, i, b, count=1;
cout << endl << "Input stating integer = ";
cin >> x;
cout << endl << "Input ending integer = ";
cin >> i;
for (int a = i; a >= x; a--)
{
if (a % 2 == 0)
{
cout << endl << "Even numbers are =" << a;
count++;
}
if (count >= 5)
{
break;
}
}
return 0;
}
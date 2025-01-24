/*Question: Write a C++ program using for loop. That takes a number from the user Check if the
number is even then displays its table till 10 multiples. Output should be in the following form:
2 * 1 =2 */
#include <iostream>
using namespace std;
int main()
{
int x,i, prod;
cout << endl << "Enter a number for table = ";
cin >> x;
if (x % 2 == 0)
{
for ( i = 1; i <= 10; i++)
{
prod = x * i;
cout << endl << x << " * " << i << " = " << prod;
}
}
return 0;
}
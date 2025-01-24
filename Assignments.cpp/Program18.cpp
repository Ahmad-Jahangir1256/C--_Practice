/*Question: Write a C++ program using nested for loop to print the following pyramid.
12345
1234
123
12
1 */
#include <iostream>
using namespace std;
int main()
{
int rows = 5;
for (int i = rows; i >= 1; i--)
{
for (int x = 1; x <= i; x++)
{
cout << x << " ";
}
cout << endl;
}
return 0;
}
/*Question: Write a C++ program using nested for loop to print the following pyramid.
A
BB
CCC
DDDD
EEEEE  */
#include <iostream>
using namespace std;
int main()
{
int no_of_rows = 5;
for (char ch = 'A'; ch < 'A' + no_of_rows; ch++)
{
for (int i = 0; i < (ch - 'A' + 1); i++)
{
cout << ch;
}
cout << endl;
}
return 0;
}
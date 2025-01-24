/*Question: Write a C++ program that reads an integer and determines and prints whether it is odd
or even using if-else statements. */
#include <iostream>
using namespace std;
int main()
{
int a;
cout << "Enter a Number" << endl;
cin >> a;
if (a % 2 == 0)
{
    cout << "Entered number is even" << endl;
}
else
{ 
    cout << "Entered number is odd" << endl;
}
 return 0;
}
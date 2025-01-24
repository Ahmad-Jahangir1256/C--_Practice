/*Question: Write a C++ program that compares two strings using the == operator.  */
#include <iostream>
#include <string>
using namespace std;
int main()
{
string s1, s2;
cout << "Enter the first string: ";
getline(cin, s1);
cout << "Enter the second string: ";
getline(cin, s2);
if (s1 == s2)
{
cout << "The strings are equal." << endl;
}
else
{
cout << "The strings are not equal." << endl;
}
return 0;
}
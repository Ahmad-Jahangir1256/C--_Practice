/*Question: : Write a program that inputs two strings from user and compare them using strcmp function.
The program displays whether the first string is less then, equal to or greater than second string.  */
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
int len1 = s1.length();
int len2 = s2.length();
if (len1 < len2)
{
cout << "The first string is shorter than the second string." << endl;
}
else if (len1 > len2)
{
cout << "The first string is longer than the second string." << endl;
}
else
{
cout << "The first string is equal in length to the second string." << endl;
}
return 0;
}
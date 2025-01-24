/*Question: : Write a C++ program that extracts a substring from a string using the substr() function  */
#include <iostream>
#include <string>
using namespace std;
int main()
{
string str;
int start, length;
cout << "Enter the original string: ";
getline(cin, str);
cout << "Enter the starting position (0-based index): ";
cin >> start;
cout << "Enter the length of the substring: ";
cin >> length;
if (start >= 0 && start + length <= str.length())
{
cout << "The extracted substring is: " << str.substr(start, length) << endl;
}
else
{
cout << "Error: The starting position or length is out of range." << endl;
}
return 0;
}
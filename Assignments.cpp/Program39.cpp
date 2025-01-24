/*Question: Write a program that inputs string and output the length of characters.  */
#include <iostream>
#include <string>
using namespace std;
int main()
{
string str;
cout << "Enter a string: ";
getline(cin, str);
cout << "The number of characters in the string is: " << str.length() << endl;
return 0;
}
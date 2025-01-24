/*Question: : Write a program that takes name of five countries. It only displays the countries whose name
start from vowels.  */
#include <iostream>
#include <string>
using namespace std;
int main()
{
string countries[5];
cout << "Enter the names of five countries:\n";
for (int i = 0; i < 5; ++i)
{
getline(cin, countries[i]);
}
cout << "\nCountries starting with vowels are:\n";
for (int i = 0; i < 5; ++i)
{
char first = countries[i][0];
if (first == 'A' || first == 'E' || first == 'I' || first == 'O' || first == 'U' ||
first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u')
{
cout << countries[i] << endl;
}
}
return 0;
}
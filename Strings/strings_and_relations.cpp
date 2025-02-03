#include <iostream>
#include <string>
using namespace std;
void compareStringLengths(const string& str1, const string& str2) 
{
    if (str1.length() > str2.length()) 
    {
        cout << "The first string is longer." << endl;
    }
    else if (str1.length() < str2.length()) 
    {
        cout << "The second string is longer." << endl;
    } 
    else 
    {
        cout << "Both strings are of equal length." << endl;
    }
}
int main() 
{
    string string1, string2;
    cout << "Enter the first string: ";
    cin >> string1;
    cout << "Enter the second string: ";
    cin >> string2;
    compareStringLengths(string1, string2);
    return 0;
}

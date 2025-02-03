#include <iostream>
#include <string>
using namespace std;
int main() 
{
    // Creating and initializing strings
    string str1 = "Hello";
    string str2 = "World";

    // Concatenating strings
    string str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    // Finding a substring
    size_t found = str3.find("World");
    if (found != string::npos)
        cout << "'World' found at: " << found << endl;

    // Substring extraction
    string substr = str3.substr(6, 5);
    cout << "Extracted substring: " << substr << endl;

    // String length
    cout << "Length of str3: " << str3.length() << endl;

    // Comparing strings
    if (str1 == "Hello")
        cout << "str1 is equal to 'Hello'" << endl;

    // Modifying strings
    str1[0] = 'h';
    cout << "Modified str1: " << str1 << endl;

    return 0;
}
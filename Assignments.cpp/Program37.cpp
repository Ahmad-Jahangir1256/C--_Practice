/*Question: Write a C++ program that prompts the user to enter a word in a character array and then
checks whether it is a palindrome or not.
• NOTE: A palindrome is a word which if reversed, spells the same e.g. RADAR if reversed spells
RADAR so it is a palindrome whereas HELLO when reversed is OLLEH which is not a palindrome.  */
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
char word[100];
cout << "Enter a word: ";
cin >> word;
for (int i = 0, j = strlen(word) - 1; i < j; ++i, --j)
{
if (tolower(word[i]) != tolower(word[j]))
{
cout << word << " is not a palindrome." << endl;
return 0;
}
}
cout << word << " is a palindrome." << endl;
return 0;
}
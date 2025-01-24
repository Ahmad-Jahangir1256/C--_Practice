/*Question: Write a program that reads the characters from a text file. It counts total number of
characters and total number of vowels in the file.  */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream file("test.txt");
if (!file)
{
cout << "Error opening file!" << endl;
return 1;
}
char ch;
int totalChars = 0, vowelCount = 0;
while (file.get(ch))
{
totalChars++;
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
{
vowelCount++;
}
}
cout << "Total Characters: " << totalChars << endl;
cout << "Total Vowels: " << vowelCount << endl;
file.close();
return 0;
}
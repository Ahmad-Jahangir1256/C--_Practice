/*Question: Using ifstream and ofstream header files, read a string delimited by '&' from file
"Example.txt", tokenize it using a function tokenizer(). It should take string as a parameter and display
the tokenized substrings on console. Call the function in main().  */
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void tokenizer(const string& str, string tokens[], int& tokenCount)
{
stringstream ss(str);
string token;
tokenCount = 0;
while (getline(ss, token, '&'))
{
tokens[tokenCount++] = token;
}
}
int main()
{
ifstream inputFile("Example.txt");
if (!inputFile)
{
cerr << "Error: Could not open the file!" << endl;
return 1;
}
string fileContent;
getline(inputFile, fileContent);
inputFile.close();
const int MAX_TOKENS = 100;
string tokens[MAX_TOKENS];
int tokenCount = 0;
tokenizer(fileContent, tokens, tokenCount);
cout << "Tokenized Substrings:" << endl;
for (int i = 0; i < tokenCount; i++)
{
cout << tokens[i] << endl;
}
return 0;
}
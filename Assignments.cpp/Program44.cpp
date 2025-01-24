/*Question: Write a program that reads a text file which has a poem written in it. (Write down the poem
yourself in a text file manually). Your program should display that poem and count total number of lines
in the file.  */
#include <iostream>
#include <fstream>
#include <string>
int main()
{
std::ifstream poemFile("Poem.txt");
if (!poemFile)
{
std::cerr << "Error: Could not open the file!" << std::endl;
return 1;
}
std::string line;
int lineCount = 0;
std::cout << "Poem Content:\n" << std::endl;
while (std::getline(poemFile, line))
{
std::cout << line << std::endl;
lineCount++;
}
poemFile.close();
std::cout << "\nTotal number of lines in the poem: " << lineCount << std::endl;
return 0;
}
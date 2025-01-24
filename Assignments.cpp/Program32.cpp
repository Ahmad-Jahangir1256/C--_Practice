/*Question: Write a program that creates an array of strings (array of pointers to characters). It should
then print each string on a new line.  */
#include <iostream>
using namespace std;
int main()
{
const char *strings[] =
{
"Hello, World!",
"C++ programming is fun.",
"Pointers can be tricky but powerful.",
"Let's learn together!",
"Have a great day!"
};
int numStrings =5;
cout << "Printing strings:" << endl;
for (int i = 0; i < numStrings; ++i)
{
cout << strings[i] << endl;
}
return 0;
}
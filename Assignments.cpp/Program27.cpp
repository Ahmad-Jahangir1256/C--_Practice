/*Question: Write two ways of displaying the 4th element of an array num of type float and size 10.
• Using subscript notation.
• Using offset notation  */
#include <iostream>
using namespace std;
int main()
{
 float num[10] = {};
cout << "Enter float values: ";
for (int a=0;a<10;a++)
{
cin >> num[a];
}
 cout << "Using subscript notation: " << num[3] << endl;
 cout << "Using offset notation: " << *(num + 3) << endl;
 return 0;
}
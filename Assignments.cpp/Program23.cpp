/*Question: Write a C++ program to swap first and last element of an integer 1-d array. */
#include <iostream>
using namespace std;
int main()
{
int temp, j;
cout << "Enter number of array values = " << endl;
cin >> j;
int swap[j];
cout << "Enter "<< j << " numbers = " << endl;
for (int i = 0; i < j; i++)
{
cin >> swap[i];
cout << "Numbers before swaping = " << swap[i] << endl;
}
cout << endl;
temp = swap[0];
swap[0] = swap[j-1];
swap[j-1] = temp;
for (int i = 0; i < j; i++)
{
cout << endl << "Numbers after swaping = " << swap[i] << endl;
}
return 0;
}
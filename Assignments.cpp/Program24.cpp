/*Question: Declare a 4x5 array of integers and get user input to fill the array values. Find the minimum
value in the array.  */
#include <iostream>
using namespace std;
int main()
{
int mini;
int arr[4][5];
cout << "Enter values: ";
for(int x=0;x<4;x++)
{
for(int y=0;y<5;y++)
{
cin>> arr[x][y];
}
}
mini=arr[0][0];
for(int x=0;x<4;x++)
{
for(int y=0;y<5;y++)
{
if (arr[x][y]<mini)
{
mini = arr[x][y];
}
}
}
cout << "Minimum = "<< mini;
return 0;
}
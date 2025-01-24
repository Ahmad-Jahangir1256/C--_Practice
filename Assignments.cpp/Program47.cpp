/*Question: Using ifstream and ofstream header files, read input of 15 integers from file "marks.txt",
hold all the values in an array and compute its median. Make a function Median() that takes an array and
its size as arguments. After sorting, it will find the mean of that sorted array through the following
formulae:
Write main program. Take the values of array in it from user. Call only the function named median() from
main and pass it the array and its size.  */
#include <iostream>
#include <fstream>
using namespace std;
void sortArray(int arr[], int size)
{
for (int i = 0; i < size - 1; i++)
{
for (int j = 0; j < size - i - 1; j++)
{
if (arr[j] > arr[j + 1])
{
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
double median(int arr[], int size)
{
sortArray(arr, size);
if (size % 2 == 0)
{
return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
}
else
{
return arr[size / 2];
}
}
int main()
{
int arr[15];
ifstream file("marks.txt");
if (!file)
{
cout << "Error opening file!" << endl;
return 1;
}
for (int i = 0; i < 15; i++)
{
file >> arr[i];
}
file.close();
cout << "Median: " << median(arr, 15) << endl;
return 0;
}
/*Question: Using ifstream and ofstream header files, read input of 15 integers from file "marks.txt",
hold all the values in an array and compute linear search by making the function
linearsearch() that takes an array, its size and the key to search as arguments.
Write main program. Call only the function named linearsearch() from main and pass it the
array and its size   */
#include <iostream>
#include <fstream>
using namespace std;
bool linearsearch(int arr[], int size, int key)
{
for (int i = 0; i < size; i++)
{
if (arr[i] == key)
{
return true;
}
}
return false;
}
int main()
{
ifstream file("marks.txt");
if (!file)
{
cout << "Error opening file!" << endl;
return 1;
}
int arr[15];
for (int i = 0; i < 15; i++)
{
file >> arr[i];
}
file.close();
int key;
cout << "Enter number to search: ";
cin >> key;
if (linearsearch(arr, 15, key))
{
cout << "Key found!" << endl;
}
else
{
cout << "Key not found!" << endl;
}
return 0;
}
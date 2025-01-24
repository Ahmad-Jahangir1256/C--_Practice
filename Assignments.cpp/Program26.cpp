/*Question: Write a C++ program that declares a 5x20 array of integers, assigns values to it, and prompts
the user to enter a number to search. Then, search for the entered number in the array and display its
index if found. This task is similar to Problem 1.  */
#include <iostream>
using namespace std;
int main()
{
 int arr[5][20] = {
 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
 {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
 {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
 {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
 {81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
 };
 int searchNum;
 bool found = false;
 cout << "Enter the number to search in this array: ";
 cin >> searchNum;
 for (int i = 0; i < 5; i++) 
 {
 for (int j = 0; j < 20; j++) 
 {
 if (arr[i][j] == searchNum) 
 {
 cout << "Number " << searchNum << " found at index [" << i << "][" << j << "]" << endl;
 found = true;
 break;
 }
 }
 if (found) break;
 }
 if (!found) 
 {
 cout << "Number " << searchNum << " not found in the array." << endl;
 }
 return 0;
}
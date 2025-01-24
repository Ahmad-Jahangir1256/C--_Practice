/*Question: : Write a program to input values into a 6x7 array of integers. Find the total number of even
and odd values entered in the array.  */
#include <iostream>
using namespace std;
int main() {
 const int rows = 6;
 const int columns = 7;
 int evenCount = 0, oddCount = 0;
 int array[rows][columns];
 cout << "Enter " << rows * columns << " integers for the " << rows << "x" << columns << " array:" <<
endl;

 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < columns; j++) {
 cout << "Enter value for position (" << i+1 << "," << j+1 << "): ";
 cin >> array[i][j];
 }
 }
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < columns; j++) {
 if (array[i][j] % 2 == 0) {
 evenCount++;
 } else {
 oddCount++;
 }
 }
 }
 cout << "\nTotal number of even values: " << evenCount << endl;
 cout << "Total number of odd values: " << oddCount << endl;
 return 0;
}
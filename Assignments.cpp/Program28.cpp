/*Question: : Declare an integer, create a pointer to it, print its address, modify its value using the
pointer, and verify the changes.  */
#include <iostream>
using namespace std;
int main()
{
int a;
int *ptr = &a;
cout << "Enter starting value: ";
cin >> a;
cout << "Address of Integer: " << ptr;
cout << endl << "Initial value: " << a;
cout << endl << "Enter Final Value: ";
cin >> *ptr;
cout << endl << "Final Value: " << *ptr;
return 0;
}
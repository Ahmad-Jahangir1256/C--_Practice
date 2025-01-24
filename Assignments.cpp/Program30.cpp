/*Question: Write a function to swap two integers using pointers and demonstrate it in the main()
function.   */
#include<iostream>
using namespace std;
void swap(int* p1, int* p2)
{
int temp; temp = *p1; *p1 = *p2; *p2 = temp;
}
int main()
{
int a, b;
int* ptr1, * ptr2;
cout << "Enter two values: ";
cin >> a >> b;
ptr1 = &a;
ptr2 = &b;
cout << endl << "Before swapping: " << endl << "a = " << a << " b = " << b;
swap(ptr1, ptr2);
cout << endl << "After swapping: " << endl << "a = " << a << " b = " << b;
return 0;
}
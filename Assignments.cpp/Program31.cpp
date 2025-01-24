/*Question: Write a program that demonstrates the use of a pointer to a pointer. In this program, use a
pointer to pointer to modify the value of an integer  */
#include <iostream>
using namespace std;
int main()
{
int i;
cout<< "Enter Value: ";
cin>>i;
int *p = &i;
int **p2p = &p;
cout << "Initial value of 'value': " << i << endl;
cout << "Address of 'value': " << &i << endl;
cout << "Address stored in 'p': " << p << endl;
cout << "Value pointed to by 'p': " << *p << endl;
cout << "Address stored in 'p2p': " << p2p << endl;
cout << "Value pointed to by 'p2p' (address in 'p'): " << *p2p << endl;
cout << "Value pointed to by the value pointed to by 'p2p': " << **p2p << endl;
cout << "Enter new value: ";
cin >> **p2p;
cout << "\nAfter modification:" << endl;
cout << "Value of 'value': " << i << endl;
cout << "Value pointed to by 'ptr': " << *p << endl;
cout << "Value pointed to by the value pointed to by 'ptr_to_ptr': " << **p2p << endl;
return 0;
}
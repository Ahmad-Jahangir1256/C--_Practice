/*Question: Write a C++ function to swap (interchange) two numbers. Write a function which
 takes two variable values and then swaps them. Program sequence: Enter the value 
 of variable a:5 Enter the value of variable b:10 ///After swapping the output would be 
 The value of variable a is=10 The value of variable b is=5*/
#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the value of variable a: ";
    cin >> a;
    cout << "Enter the value of variable b: ";
    cin >> b;
    cout << "Before swapping the value of variable a is=" << a << endl;
    cout << "Before swapping the value of variable b is=" << b << endl;

    Swap(a, b);
    
    cout << "The value of variable a is=" << a << endl;
    cout << "The value of variable b is=" << b << endl;
    return 0;
}
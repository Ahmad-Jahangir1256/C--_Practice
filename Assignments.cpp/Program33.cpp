/*Question: Write a program that uses function pointers to perform addition and multiplication. Pass
function pointers to a general function that performs an operation.  */
#include <iostream>
using namespace std;
int add(int a, int b)
{
return a + b;
}
int multiply(int a, int b)
{
return a * b;
}
int performOperation(int a, int b, int (*operation)(int, int))
{
return operation(a, b);
}
int main() {
int num1, num2;
cout << "Enter 2 integers: ";
cin >> num1 >> num2;
cout << "Addition of " << num1 << " and " << num2 << ": "
<< performOperation(num1, num2, add) << endl;
cout << "Multiplication of " << num1 << " and " << num2 << ": "
<< performOperation(num1, num2, multiply) << endl;
return 0;
}
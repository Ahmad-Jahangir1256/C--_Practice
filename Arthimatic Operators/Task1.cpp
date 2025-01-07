#include <iostream>
using namespace std;
int main ()
{
    int a,b,sum,sub,prod,div,mod;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    sum = a + b;
    sub = a - b;
    prod = a * b;
    div = a / b;
    mod = a % b;
    cout << "Sum of a and b is: " << sum << endl;
    cout << "Subtraction of a and b is: " << sub << endl;
    cout << "Product of a and b is: " << prod << endl;
    cout << "Division of a and b is: " << div << endl;
    cout << "Modulus of a and b is: " << mod << endl;
    return 0;
}
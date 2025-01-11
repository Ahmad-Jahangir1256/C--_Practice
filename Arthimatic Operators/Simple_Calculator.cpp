#include <iostream>
using namespace std;
int main ()
{
    int a , b;
    char op;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> b;
    switch (op)
    {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
    }
    return 0;
}
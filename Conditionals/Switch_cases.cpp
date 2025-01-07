#include <iostream>
using namespace std;
int main ()
{
    // Declare variables
    int a, b;
    
    // Prompt user to enter the value of a
    cout << "Enter the value of a: ";
    cin >> a;
    
    // Prompt user to enter the value of b
    cout << "Enter the value of b: ";
    cin >> b;
    
    char op;

    // Prompt user to enter the operator
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    // Switch case to perform the operation
    switch (op)
    {
        case '+':
            cout << "a + b = " << a + b << endl;
            break;
        case '-':
            cout << "a - b = " << a - b << endl;
            break;
        case '*':
            cout << "a * b = " << a * b << endl;
            break;
        case '/':
            cout << "a / b = " << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    
    return 0;
}
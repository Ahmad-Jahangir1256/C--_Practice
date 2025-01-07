#include <iostream>
using namespace std;
int main()
{
    // Declare variables
    int a, b;

    // Prompt user to enter the value of a
    cout << "Enter the value of a: ";
    cin >> a;

    // Prompt user to enter the value of b
    cout << "Enter the value of b: ";
    cin >> b;

    // Check if a is equal to b
    if (a == b)
    {
        cout << "a is equal to b" << endl;
    }

    // Check if a is not equal to b
    if (a != b)
    {
        cout << "a is not equal to b" << endl;
    }

    // Check if a is greater than b
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }

    // Check if a is less than b
    if (a < b)
    {
        cout << "a is less than b" << endl;
    }

    // Check if a is greater than or equal to b
    if (a >= b)
    {
        cout << "a is greater than or equal to b" << endl;
    }

    // Check if a is less than or equal to b
    if (a <= b)
    {
        cout << "a is less than or equal to b" << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}